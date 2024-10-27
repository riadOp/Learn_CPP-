#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};


struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}


struct Node* Insert_End(struct Node* head,int num){
    if(head == NULL){
        printf("List is Empty !!\n");
    }else{
        struct Node* newNode = Creating(num);
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}
/*Ensure that the Head of the linked list is not NULL; if it is, the list is empty, so return.
Create a temporary pointer and point it to the current Head of the list.
Update the current head of the singly linked list to the next node.
Point the next pointer of the temporary node to NULL to detach it from the singly linked list.
Delete the temporary node.*/
struct Node* Delete_First(struct Node* head){
    if(head == NULL){
        printf("List is Empty !!\n");
    }else{
        struct Node* temp = head;
        head = temp->next;
        free(temp);
        return head;
    }
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
    struct Node* head;
    int n ,a ;
    scanf("%d",&n);
    for(int i = 1 ; i<=n ;i++){
        scanf("%d",&a);
        if(i==1){
            head = Creating(a);
        }else{
            head = Insert_End(head,a);
        }
    }
    Printing(head);
    head = Delete_First(head);
    Printing(head);
    
    return 0;
}