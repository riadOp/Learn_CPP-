#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next;
};

struct Node* Creating(data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL;
}

struct Node* enqueues(struct Node* head , struct Node** tail , int data){
    struct Node* newNode = Creating(data);
    if(head == NULL){
        head = newNode ;
        (*tail) = newNode ;
        return head ;
    }else{
        (*tail)->next = newNode ;
        (*tail) = newNode ;
        return head ;
    }
}

struct Node* dequeues(struct Node* head,struct Node** tail){
    if(head == NULL){
        printf("Queues is Empty !!\n");
    }
    struct Node* temp = head ;
    head = head->next ;
    free(temp);
    return head ;
}

void printing(struct Node* head ){
     if(head == NULL){
        printf("Queues is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp != NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}

int main(){
    struct Node* head = NULL ;
    struct Node* tail = NULL ;
    printing(head );
    int noode , value ;
    
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
       
        scanf("%d",&value);
        head = enqueues(head,&tail,value);
        printing(head);
        
    }

}