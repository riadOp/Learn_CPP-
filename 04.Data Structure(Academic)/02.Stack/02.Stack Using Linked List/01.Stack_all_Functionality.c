#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
};

//Pushing an Element to the stack 
struct Node* Push(struct Node* top, int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = top ;
    top = newNode ;
    return top ;
}

//Popping an element to the stack
struct Node* Pop(struct Node* top){
    if(top==NULL){
        printf("Stack Underflow\n");
    }
    struct Node* temp = top ;
    top = top->next ;
    free(temp);
    return top ;
}

//Peek the topmost element from the stack
struct Node* Peek(struct Node* top){
    if(top==NULL){
        printf("Stack is Underflowing\n");
    }
    struct Node* temp = top ;
    printf("The Topmost Element is : %d\n",temp->value);
} 

void Printing(struct Node* top){
    if(top==NULL){
        printf("Stack Underflow\n");
    }
    struct Node* temp = top ;
    while(temp!=NULL){
        printf("%d->",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct Node* top = NULL ;
    top = Push(top,5);
    top = Push(top,10);
    top = Pop(top);
    top = Push(top,15);
    Peek(top);
    Printing(top);

}