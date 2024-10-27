#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* next ;
};

struct Node2{
    int value ;
    struct Node2* next ;
    struct Node2* prev ;
};

struct Node3{
    int value ;
    struct Node3* next ;
};

struct Node3* Creating(int data){
    struct Node3* newNode = (struct Node3*)malloc(sizeof(struct Node3));
    newNode->value = data ;
    newNode->next = NULL ;
    return newNode ;
}

struct Node2* Linking(struct Node2* head2 , int data){
    struct Node2* newNode = (struct Node2*)malloc(sizeof(struct Node2));
    newNode->value = data ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    if(head2 == NULL){
        // newNode->next = head2 ;
        head2 = newNode ;
        return head2 ;
    }else{
        struct Node2* temp = head2 ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        newNode->prev = temp ;
        temp->next = newNode ;
        return head2 ;
    }
}

// struct Node* Creating(int data){
//     struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));
//     newNode->value = data ;
//     newNode->next = NULL ;
//     return newNode ;
// }

struct Node* Creating_Link(struct Node* head , int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL ;
    if(head == NULL){
        newNode->next = head ;
        head = newNode ;
        return head ;
    }else{
        struct Node* temp = head ;
        while(temp->next != NULL){
            temp = temp->next ;
        }
        temp->next = newNode ;
        return head ;
    }
}

struct Node* Insert_at_positon1(struct Node* head , int position , int data){
    struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL ;
    if(head == NULL || position == 1){
        newNode->next = head ;
        head = newNode ;
        return head ;
    }
    struct Node* temp = head ;
    for(int i =1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    newNode->next = temp->next ;
    temp->next =  newNode ;
    return head ;
}

struct Node* delete_at_first(struct Node* head){
    if(head == NULL){
        printf("NO NODe!!\n");
    }
    struct Node* temp = head ;
    head = head->next ;
    free(temp);
    return head ;
}

struct Node* delete_at_last(struct Node* head){
    if(head == NULL){
        printf("NO NOoodde!!\n");
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

struct Node* delete_at_position(struct Node* head , int position){
    if(head == NULL){
        printf("No nooodeeee !\n");
    }
    if(position == 1){
        return delete_at_first(head );
    }
    struct Node* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node* nodetodelete = temp->next ;
    temp->next = nodetodelete->next ;
    free(nodetodelete);
    return head ;
}

struct Node2* Insert_at_positon(struct Node2* head2 , int position , int data){
    if(head2 == NULL || position==1){
        return Linking(head2,data);
    }
    struct Node2* newNode = (struct Node2*)malloc(sizeof(struct Node2));
    newNode->value = data ;
    newNode->next = NULL ;
    newNode->prev = NULL ;
    struct Node2* temp = head2 ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    newNode->next = temp->next ;
    newNode->prev = temp ;
    temp->next->prev = newNode ;
    temp->next = newNode ;
    return head2 ;
}

struct Node2* delete_at_top(struct Node2* head){
    if(head == NULL){
        printf("No nooode !!\n");
    }
    struct Node2* temp = head ;
    head = head->next ;
    free(temp);
}

struct Node2* delete_at_l(struct Node2* head){
    if(head == NULL){
        printf("No nooode !!\n");
    }
    struct Node2* temp = head ;
    while(temp->next->next != NULL ){
        temp = temp->next ;
    }
    struct Node2* nodetodelete = temp->next ;
    temp->next = NULL ;
    free(nodetodelete);
    return head ;
}

struct Node2* delete_at_pos(struct Node2* head , int position){
    if(head == NULL){
        printf("No nooode !!\n");
    }
    if(position == 1){
        return delete_at_top(head);
    }
    struct Node2* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node2* nodetodele = temp->next ;
    temp->next = nodetodele->next ;
    free(nodetodele);
    return head ;
}

void printing(struct Node* head ){
    if(head == NULL){
        printf("List is Empty !!\n");
        return ;
    }
    struct Node* temp = head ;
    while(temp!= NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}
void printing3(struct Node3* head ){
    if(head == NULL){
        printf("List is Empty !!\n");
        return ;
    }
    struct Node3* temp = head ;
    while(temp!= NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}

void printing2(struct Node2* head ){
    if(head == NULL){
        printf("List is Empty !!\n");
        return ;
    }
    struct Node2* temp = head ;
    while(temp!= NULL){
        printf("%d->",temp->value);
        temp = temp->next ;
    }
    printf("NULL\n");
}

int main(){
    struct Node* head = NULL ;
    struct Node2* head2 = NULL ; 
    struct Node3* head3 = NULL ;
    printing(head);
    printing2(head2);
    head = Creating_Link(head,1);
    head = Creating_Link(head,2);
    head = Creating_Link(head,3);
    head = Creating_Link(head,4);
    head = Creating_Link(head,5);
    printing(head);
    head2 = Linking(head2,6);
    head2 = Linking(head2,7);
    head2 = Linking(head2,8);
    head2 = Linking(head2,9);
    head2 = Linking(head2,10);
    printing2(head2);
    head = Insert_at_positon1(head ,3,100);
    printing(head);
    head = delete_at_position(head,3);
    printing(head);
    head2 = Insert_at_positon(head2,3,100);
    printing2(head2);
    head2 = delete_at_pos(head2,3);
    printing2(head2);
    head3 = Creating(11);
    head3->next = Creating(12);
    head3->next->next = Creating(13);
    head3->next->next->next = Creating(14);
    printing3(head3);
}