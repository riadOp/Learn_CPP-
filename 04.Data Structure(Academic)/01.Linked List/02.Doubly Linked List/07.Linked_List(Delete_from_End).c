#include<stdio.h>
#include<stdlib.h>

//Structure for Doubly Linked list
struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ; 
};

//Function to Delete a Node from the End of Linked List 
struct Node* Delete_from_End(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    struct Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp->next ;
    }
    struct Node* Nodetodelete = temp->next->next;
    temp->next = NULL;
    free(Nodetodelete);
    return head ;
}
