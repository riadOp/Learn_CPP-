#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

// Function to enqueue an element in the queue
struct Node* Enqueues(struct Node* head, struct Node** tail, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;            // Set head to the new node
        *tail = newNode;            // Set tail to the new node
    } else {
        (*tail)->next = newNode; // Link the new node
        *tail = newNode;         // Update tail to the new node
    }

    return head;                  // Return updated head
}

// Function to dequeue an element from the queue
struct Node* Dequeues(struct Node* head, struct Node** tail) {
    if (head == NULL) {
        printf("Queue is empty !!\n");
        return NULL;                         // Return NULL if the queue is empty
    }

    struct Node* temp = head;
    head = head->next;                  // Move head to the next node
    free(temp);                            // Free the old head

                                      // Update tail if the queue becomes empty
    if (head == NULL) {
        *tail = NULL;             // Set tail to NULL if the queue is empty
    }

    return head;                    // Return updated head
}

// Function to print the queue
void printing(struct Node* head) {
    if (head == NULL) {
        printf("Queue is empty !!\n");
        return;                                // Return if the queue is empty
    }

    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    printf("NULL\n");  // Indicate the end of the queue
}

int main() {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    // Enqueue elements
    head = Enqueues(head, &tail, 5);
    head = Enqueues(head, &tail, 10);
    head = Enqueues(head, &tail, 15);
    head = Enqueues(head, &tail, 20);

    // Print the queue
    printing(head);  // Output: 5 -> 10 -> 15 -> 20 -> NULL

    // Dequeue elements
    head = Dequeues(head, &tail);
    head = Dequeues(head, &tail);
    head = Dequeues(head, &tail);

    // Print the queue after dequeuing
    printing(head);  // Output: 20 -> NULL

    // Dequeue the last element
    head = Dequeues(head, &tail);
    printing(head);  // Output: Queue is empty !!

    return 0;
}
