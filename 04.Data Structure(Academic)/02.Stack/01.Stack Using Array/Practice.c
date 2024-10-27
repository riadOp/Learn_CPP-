#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL ;
    return newNode ;
}

struct Node* Push(struct Node* top,int data){
    struct Node* newNode = Creating(data);
    newNode->next = top ;
    top = newNode ;
    return top ;
}

struct Node* pop(struct Node* top){
    if(top == NULL){
        printf("Stack Underflow !! \n");
    }
    struct Node* temp = top ;
    top = top->next ;
    free(temp);
    return top ;
}

void Printing(struct Node* top){
    if(top == NULL){
        printf("Stack Underflow!!\n");
    }
    struct Node* temp = top ;
    printf("NULL\n");
    while(temp!=NULL){
        printf("<-%d",temp->value);
        temp = temp->next ;
    }
}

int main(){
    struct Node* top = NULL ;
    Printing(top);
    int noode , value ;
    printf("Enetr number of NOde to create : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        top = Push(top,value);
        Printing(top);
        top = pop(top);
        Printing(top);
    }
}