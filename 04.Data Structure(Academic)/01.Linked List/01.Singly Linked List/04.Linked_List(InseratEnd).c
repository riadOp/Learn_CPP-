#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node* CreatingNode(int num){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = num;
    newNode->next = NULL;
    return newNode;
}
/*Create a new Node.
If the list is empty, update the Head pointer to be this new node and then return.
Otherwise traverse till the last node of the singly linked list.
Connect next pointer of the last node to the new node.*/

struct Node* InserAtEnd(struct Node* head , int num){
    struct Node* newNode = CreatingNode(num);
    if(head == NULL){
        return newNode;
    }else{
        struct Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
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
    struct Node* head = NULL;
    int n,a;
    scanf("%d",&n);
    for(int i= 1 ; i<=n ;i++){
        scanf("%d",&a);
        head = InserAtEnd(head,a);
    }    
    Printing(head);
    return 0;
}