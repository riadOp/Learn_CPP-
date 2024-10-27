#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    return newNode ;
}

void printing(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
        return ;
    }
    struct Node* temp = head ;
    while(temp != NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
     temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    printf("NULL");
    struct Node* rev= temp ;
    while(rev != NULL){
        printf("<-%d",rev->value);
        rev= rev->prev ;
    }
    printf("\n");
}

struct Node* Insert_at_front(struct Node* head , int data){
    struct Node* newNode = Creating(data);
    newNode->next = head ;
    head->prev = newNode ;
    head = newNode ;
    return head ;
}

struct Node* Insert_at_end(struct Node* head , int data){
    if(head == NULL){
        struct Node* newNode = Creating(data);
        newNode->next = head ;
        head->prev = newNode ;
        head = newNode ;
        return head ;
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    temp->next = newNode ;
    newNode->prev = temp ;
    return head ;
}

struct Node* Insert_at_position(struct Node* head , int position , int data){
    if(head == NULL || position == 1){
        return Insert_at_front(head ,data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node* temp2 = temp->next ;
    newNode->prev = temp ;
    newNode->next = temp->next ;
    temp->next = newNode ;
    temp2->prev = newNode ;
    return head ;
}

struct Node* delete_at_first(struct Node* head){
    if(head == NULL){
        printf("List is Empty !!\n");
    }
    struct Node* temp = head ;
    head->next->prev = NULL ;
    head = head->next ; 
    free(temp);
    return head ;
}

struct Node* delete_at_last(struct Node* head){
    if(head == NULL){
        printf("List is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp->next->next!=NULL){
        temp = temp->next ;
    }
    struct Node* temp2 = temp->next ;
    if(temp->next != NULL){
        temp->next->prev = NULL ;
    }
    temp->next = NULL ;
    free(temp2);
    return head ;
}

struct Node* delete_at_position(struct Node* head , int position){
    if(head == NULL){
        printf("List is Empty !!\n");
        return head ;
    }
    if(position == 1){
        struct Node* temp = head ;
        head->prev = NULL ;
        head = head->next ;
        free(temp);
        return head ;
    }
    struct Node* temp = head;
    for(int i =1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    } 
    struct Node* nodetodelete = temp->next ;
    if(temp->next != NULL){
        temp->next->next->prev = temp ;
    }
    temp->next = temp->next->next ;
    free(nodetodelete);
    return head ;
}

int main(){
    struct Node* head = NULL ;
    head = Creating(10);
    head->next = Creating(20);
    head->next->next = Creating(30);
    head->next->prev = head ;
    head->next->next->prev = head->next ;
    printing(head);
    head = Insert_at_position(head,1,5);
    printing(head);
    head= delete_at_first(head);
    printing(head);
    head = delete_at_last(head);
    printing(head);
    head = Insert_at_position(head,2,8);
    printing(head);
    head = delete_at_position(head,2);
    printing(head);
    
}