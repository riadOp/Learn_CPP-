#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node* CreateNode(int num){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = num;
    newNode->next = NULL;
    return newNode;
}
/*f it is NULL, the linked list is empty, so return.
Check if the head pointer of the linked list is NULL.
Check if the position is 0.
If it is 0, call the deleteFromFirst function to delete the first node.
Initialize a counter variable and a temporary pointer to traverse the linked list.
Iterate the linked list to find the node before the deletion point (position – 1).
If the temporary pointer becomes NULL before reaching the desired position the position is out of range. Return
Store the next node of the temporary pointer in a temporary pointer.
Update the next pointer of the temporary pointer to the next pointer of the node to be deleted.
Delete the node represented by the temporary pointer.*/
struct Node* InsertSpecific(struct Node* head ,int position, int num){
    struct Node* newNode = CreateNode(num);
    if(head == NULL){
        return newNode;
    }else{
        struct Node* temp = head;
        for(int i = 0 ; temp!=NULL && i<position-1 ; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
    }
}

void Printing(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d->",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct Node* head = CreateNode(1);
    head->next = CreateNode(2);
    head->next->next = CreateNode(4);
    head->next->next->next = CreateNode(5);
    head = InsertSpecific(head,2,3);
    Printing(head);
    return 0;
}