#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};


struct Node* Creating(int num){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = num;
    newNode->next = NULL;
    return newNode;
}

struct Node* Insert_at_First(struct Node* head, int num){
    struct Node* newNode = Creating(num);
    newNode->next = head;
    head = newNode;
    return head;
}

struct Node* Insert_At_End(struct Node* head, int num){
    struct Node* newNode = Creating(num);
    if(head == NULL){
        return Insert_at_First(head, num);
    } else {
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}

struct Node* Delete_at_First(struct Node* head){
    if(head == NULL){
        printf("List is Empty!\n");
        return NULL;
    }
    struct Node* temp = head;
    head = temp->next;
    free(temp);
    return head;
}

struct Node* Delete_At_End(struct Node* head){
    if(head == NULL){
        printf("List is Empty!\n");
        return NULL;
    }
    struct Node* temp = head;
    if(temp->next == NULL) {
        free(temp);
        return NULL; // List has only one element
    }
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    struct Node* lastNode = temp->next;
    temp->next = NULL;
    free(lastNode);
    return head;
}

void Printing(struct Node* head){
    struct Node* temp = head;
    while(temp != NULL){
        printf("%d->",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    struct Node* head=NULL;
    head  = Insert_at_First(head,2);
    Printing(head);
    head = Insert_At_End(head,3);
    Printing(head);
    head = Delete_at_First(head);
    Printing(head);
    head = Delete_At_End(head);
    Printing(head);
    return 0;
}