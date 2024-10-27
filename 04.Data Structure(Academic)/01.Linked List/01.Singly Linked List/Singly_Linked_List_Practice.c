#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL ;
    return newNode ;
}

struct Node* Insert_at_first(struct Node* head,int data){
    struct Node* newNode = Creating(data);
    newNode->next = head ;
    head = newNode ;
    return head ;
}

struct Node* Insert_at_last(struct Node* head , int data){
    if(head == NULL){
        return Insert_at_first(head,data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    temp->next = newNode ;
    return head ;
}

struct Node* Insert_at_position(struct Node* head , int position , int data){
    if(head == NULL || position==1){
        return Insert_at_first(head,data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp  = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }

    newNode->next = temp->next ;
    temp->next = newNode ;
    return head ;
}


struct Node* delete_at_first(struct Node* head ){
    if(head == NULL){
        printf("Linkd List is Empty !!\n");
    }
    struct Node* temp = head ;
    head = head->next ;
    free(temp);
    return head ;
}

struct Node* delete_at_last(struct Node* head ){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp->next ;
    }
    struct Node* nodetodelete = temp->next ;
    temp->next = NULL ;
    free(nodetodelete);
    return head ;
}

struct Node* Delete_at_position(struct Node* head , int position){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    if(position==1){
        return delete_at_first(head);
    }
    struct Node* temp = head ;
    for(int i= 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node* nodetodelete = temp->next ;
    temp->next = nodetodelete->next ;
    free(nodetodelete);
    return head ;
}

void printing(struct Node* head){
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
    printing(head);
    int noode , value ;
    printf("Enetr number of NOde to create : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        head = Insert_at_last(head,value);
        printing(head);
    }
    return 0 ;
}