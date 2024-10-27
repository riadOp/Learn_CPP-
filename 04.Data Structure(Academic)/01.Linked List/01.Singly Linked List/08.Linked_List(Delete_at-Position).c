
/**
 *    author:  riad
 *    created: 09.12.2024 11:00:14
**/

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value;
    int value2;
    struct Node* next;
    
};

struct Node* Creating(int data){
    struct Node* newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* Insert_End(struct Node* head,int data){
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}
//How to Delete 
struct Node* Delete_Position(struct Node* head , int position){
    struct Node* temp = head;
    if(head == NULL){
        printf("List is Empty\n");
    }else{
        struct Node * temp = head;
        if(position == 1){
            head = temp->next;
            free(temp);
            return head;
        }
        
        for(int i = 1 ; temp->next != NULL && i<position-1 ;i++){
            temp = temp->next;
        }
        struct Node* Nodetodelete = temp->next; // Bypass the node to be deleted
        temp->next = temp->next->next;
        free(Nodetodelete); // Free the memory of the deleted node
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
    int n , a;
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
    head = Delete_Position(head,2);
    Printing(head);
    return 0;
}