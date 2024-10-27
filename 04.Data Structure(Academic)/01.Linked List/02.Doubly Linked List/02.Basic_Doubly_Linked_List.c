#include<stdio.h>
#include<stdlib.h>

//Structure for Doubly Linked list
struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ; 
};

//Function to create a newNode 
struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL;
    newNode->prev = NULL ;
    return newNode ;
}

//Function to add new Node at beginning
struct Node* Insert_at_Front(struct Node* head , int data){
    struct Node* newNOde = Creating(data);
    newNOde->next = head ;
    if(head != NULL){
        head->prev = newNOde ;
    }
    head = newNOde ;
    return head ;
}

void Printing(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp!=NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}

int main(){
    struct Node* head = NULL ;
    Printing(head);
    int N , data ;
    printf("Enter the Number of node to Create : ");
    scanf("%d",&N);
    for(int i = 1 ; i<=N ; i++){
        printf("Enter Value : ");
        scanf("%d",&data);
        head = Insert_at_Front(head,data);
    }

    Printing(head);
}