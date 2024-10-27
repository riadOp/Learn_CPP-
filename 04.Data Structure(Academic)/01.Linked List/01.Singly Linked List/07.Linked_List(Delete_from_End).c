#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* Insert_End(struct Node* head,int data){
    if(head==NULL){
        scanf("List is Empty\n");
    }else{
        struct Node* newNode = Creating(data);
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}

// Ensure that the Head of the linked list is not NULL; if it is, the list is empty, so return.
// If the singly linked list has only one node, delete the head node and point the head pointer to NULL.
// Traverse till the second last node of the singly linked list.
// Store the next node of the second last node in a temporary pointer.
// Connect the next pointer of the second last node to NULL.
// Delete the last node represented by the temporary pointer.

struct Node* Delete_End(struct Node* head){
    if (head->next == NULL) {
        // If there's only one node
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    struct Node* Last_Node = temp->next;
    temp->next = NULL;
    free(Last_Node);
    return head;

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
    struct Node* head = NULL;
    int n ,a ;
    scanf("%d",&n);
    for(int i =1 ; i<=n ; i++){
        scanf("%d",&a);
        if(i==1){
            head = Creating(a);
        }else{
            head = Insert_End(head,a);
        }
    }
    Printing(head);
    head = Delete_End(head);
    Printing(head);
    return 0;
}