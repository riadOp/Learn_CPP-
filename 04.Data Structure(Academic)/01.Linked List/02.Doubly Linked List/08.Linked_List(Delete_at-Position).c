#include<stdio.h>
#include<stdlib.h>

//Structure for Doubly Linked list
struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ; 
};


//Function to delete a Node from any position 
struct Node* Delete_at_position(struct Node* head , int position){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    if(position == 1){
        return Delete_from_Beginning(head);
    }
    struct Node* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node* nodetodelete = temp->next;
    temp->next = nodetodelete->next ;
     if (nodetodelete->next != NULL) {
        nodetodelete->next->prev = temp;  // Update previous pointer of next node
    }
    free(nodetodelete);
    return head ;
}