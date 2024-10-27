#include<stdio.h>
#include<stdlib.h>
void Printing(struct Node* head);

//Basic Structure of singly linked list
struct Node{
    int  value ; 
    struct Node* next;
};

//Crearting a new Node
struct Node* CreateNode(int num){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->value = num;
    newnode->next = NULL;
    return newnode;
}

//Printing Linked List
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
    head->next->next = CreateNode(3);
    Printing(head);
    return 0;
}