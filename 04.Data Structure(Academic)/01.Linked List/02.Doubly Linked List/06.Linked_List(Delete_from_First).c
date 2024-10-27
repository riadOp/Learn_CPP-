#include<stdio.h>
#include<stdlib.h>

//Structure for Doubly Linked list
struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ; 
};


//Function to dlete from beginning of the linked list
struct Node* Delete_from_Beginning(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    struct Node* temp = head ;
    head = head->next ;
    free(temp);
    return head ;
}