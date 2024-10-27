#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
    struct Node*prev;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    return newNode ;
}

struct Node* Insert_at_First(struct Node* head , int data){
    struct Node* newNode = Creating(data);
    if(head == NULL){
        return newNode ;
    }
    newNode->next = head ;
    head->prev = newNode ;
    head = newNode ;\
    return head ;
}

struct Node* Insert_at_Last(struct Node* head , int data){
    if(head == NULL){
        return Insert_at_First(head , data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    newNode->prev = temp ;
    temp->next = newNode ;
    return head ;
}

struct Node* Insert_at_Position(struct Node* head , int position , int data){
    if(head == NULL || position == 1){
        return Insert_at_First(head , data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1; i++ ){
        temp = temp->next ;
    }
    struct Node* temp2 = temp->next ;
    newNode->prev = temp ;
    newNode->next = temp2 ;
    temp->next = newNode ;
    return head ;
}

struct Node* Delete_at_first(struct Node* head ){
    if(head == NULL){
        printf("Linked List is Empty !!\n");
    }
    if(head->next == NULL){
        struct Node* Nodetodelte = head ;
        free(Nodetodelte);
        return head ; 
    }
    struct Node* Nodetodelete = head ;
    head = head->next ;
    head->prev = NULL ;
    free(Nodetodelete);
    return head ;
}

struct Node* Delete_From_last(struct Node* head){
    if(head == NULL){
        printf("Linked List is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp->next ;
    }
    struct Node* Nodetodelete = temp->next ;
    temp->next = NULL ;
    free(Nodetodelete);
    return head ;
}

struct Node* Delete_at_position(struct Node* head,int position){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    if(position == 1 ){
        return Delete_at_first(head);
    }
    struct Node* temp = head ;
    for(int i= 1 ; temp->next!=NULL && i<position-1; i++){
        temp = temp->next;
    }
    struct Node* Nodetodelete = temp->next ;
    struct Node* Node1 = temp ;
    temp->next = temp->next->next ;
    temp->next->prev = Node1 ;
    return head ;

}

void printing(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp != NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}

void reverse_Printing(struct Node* head){
    if(head == NULL){
        printf("Linked List is Empty !! \n");
    }
    struct Node* temp = head ;
    printf("NULL");
    while(temp != NULL){
        printf("<-%d",temp->value);
        temp = temp->prev ;
    }
    printf("\n");
}

int main(){
    struct Node* head = NULL ;
    printing(head);
    int noode , data ;
    printf("Enter number of node you want to create : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&data);
        head = Insert_at_Last(head,data);
        printing(head);
    }
    return 0 ;
}