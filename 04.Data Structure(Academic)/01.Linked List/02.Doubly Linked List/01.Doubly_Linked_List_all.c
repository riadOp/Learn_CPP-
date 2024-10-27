#include<stdio.h>
#include<stdlib.h>

//Structure for Doubly Linked list
struct Node{
    int value ;
    struct Node* next ;
    struct Node* prev ; 
};

//Function to create a newNode 
struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->next = NULL;
    newNode->prev = NULL ;
    return newNode ;
}

//Function to add new Node at beginning
struct Node* Insert_at_Front(struct Node* head , int data){
    struct Node* newNOde = Creating(data);
    newNOde->next = head ;
    if(head != NULL){
        head->prev = newNOde ;
    }
    head = newNOde ;
    return head ;
}

//Function to create a newNode at the End of the Linked list 
struct Node* Insert_at_End(struct Node* head , int data){
    if(head == NULL){
        return Insert_at_Front(head,data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    } 
    newNode->prev = temp ;
    temp->next = newNode ;
    return head;
}

//Function to create a new node at the end of the linked list 
struct Node* Insert_at_position(struct Node* head, int position ,int data){
    if(head == NULL || position == 1){
        return Insert_at_Front(head,data);
    }
    struct Node* newNode = Creating(data);
    struct Node* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    newNode->next = temp->next ;
    newNode->prev = temp ;
    if(temp->next != NULL){
        temp->next->prev = newNode ;
    }
    temp->next = newNode ;
    return head ;
}

//Function to dlete from beginning of the linked list
struct Node* Delete_from_Beginning(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    struct Node* temp = head ;
    head = head->next ;
    free(temp);
    return head ;
}


//Function to Delete a Node from the End of Linked List 
struct Node* Delete_from_End(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    struct Node* temp = head ;
    while(temp->next->next != NULL){
        temp = temp->next ;
    }
    struct Node* Nodetodelete = temp->next->next;
    temp->next = NULL;
    free(Nodetodelete);
    return head ;
}


//Function to delete a Node from any position 
struct Node* Delete_at_position(struct Node* head , int position){
    if(head == NULL){
        printf("Linked list is Empty!!\n");
    }
    if(position == 1){
        return Delete_from_Beginning(head);
    }
    struct Node* temp = head ;
    for(int i = 1 ; temp->next != NULL && i<position-1 ; i++){
        temp = temp->next ;
    }
    struct Node* nodetodelete = temp->next;
    temp->next = nodetodelete->next ;
     if (nodetodelete->next != NULL) {
        nodetodelete->next->prev = temp;  // Update previous pointer of next node
    }
    free(nodetodelete);
    return head ;
}

//Function to Print the Linked List 
void Printing(struct Node* head){
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


//Function to Print the linked list Reversly 
void Reverse_Printing(struct Node* head){
    if(head == NULL){
        printf("Linked list is Empty !!\n");
    }
    struct Node* temp = head ;
    while(temp->next != NULL){
        temp = temp->next ;
    }
    printf("NULL<-");
    while(temp != NULL){
        printf("<-%d",temp->value);
        temp= temp->prev;
    }
    printf("\n");
}


int main(){
    struct Node* head = NULL ;
    Printing(head);
    int N , data ;
    printf("Enter the Number of node to Create : ");
    scanf("%d",&N);
    for(int i = 1 ; i<=N ; i++){
        printf("Enter Value : ");
        scanf("%d",&data);
        head = Insert_at_End(head,data);
    }

    Printing(head);
    Reverse_Printing(head);
    head = Insert_at_position(head,3,3);
    Printing(head);
    Reverse_Printing(head);
    head = Delete_at_position(head,3);
    Printing(head);
}