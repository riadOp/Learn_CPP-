#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* left ;
    struct Node* right ;
};

//*Function to Create Node named "Creating" 
struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}

//*Funtion to Insert Element or to Create user defined Binary Search Tree ;
struct Node* Inserting_BST_Element(struct Node* root , int data){
    if(root == NULL){
        return Creating(data);
    }
    if(root != NULL){
        if(root->value > data){
            root->left = Inserting_BST_Element(root->left , data);
        }else{
            root->right = Inserting_BST_Element(root->right,data);
        }
    }
}

int IsBst(struct Node* root){
    static struct Node* prev = NULL ;
    if(root != NULL){
        if(!IsBst(root->left)){
            return 0 ;
        }
        if(prev != NULL && prev->value >= root->value){
            return 0 ;
        }
        prev = root ;
        return IsBst(root->right);
    }else{
        return 1 ;
    }
}

// *!Function to Searching a specific value Using Recussion
struct Node* Searching(struct Node* root,int data){
    if(root == NULL){
        return NULL ; 
    }
    if(root->value == data){
        return root ;
    }else if(data < root->value){
        return Searching(root->left,data);
    }else{
        return Searching(root->right,data);
    }
}

//*! Searching for a elemment without Recussion 
struct Node* Searching_Iteration(struct Node* root , int data){
    while(root!=NULL){
        if(root->value == data ){
            return root ;
        }else if(root->value > data){
            root = root->left ;
        }else{
            root = root->right ;
        }
    }
    return NULL;
}

void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d=>",root->value);
        InOrder(root->right);
    }
}

int main(){
    struct Node* root = NULL ;
    int noode , value ;
    printf("Enter NUmber of Node to Create : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        root = Inserting_BST_Element(root,value);
    }
    if(IsBst(root) == 1){
        printf("Its a Binary Search Treee !\n");
    }else{
        printf("Not a Bianary Search tree !!\n");
    }
    InOrder(root);
    printf("\n");
    // struct Node* result = Searching_Iteration(root,3);
    struct Node* result = Searching(root,3);
    if(result != NULL){
        printf("FOund : %d",result->value);
    }else{
        printf("Not Found!!\n");
    }
    
    return 0 ;
}