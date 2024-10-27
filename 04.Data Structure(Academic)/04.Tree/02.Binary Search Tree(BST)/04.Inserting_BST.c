#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* left ;
    struct Node* right ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}
//! Inserting a value to a Binary Search tree 
struct Node* Inserting(struct Node* root , int data){
    if(root == NULL){
        return Creating(data);
    }
    if(root->value >  data){
        root->left = Inserting(root->left ,  data);
    }else{
        root->right = Inserting(root->right,data);
    }
    return root ;
}

void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d->",root->value);
        InOrder(root->right);
    }
}

int BstOrNot(struct Node* root){
    static struct Node* prev = NULL ;
    if(root != NULL){
        if(!BstOrNot(root->left)){
            return 0 ;
        }
        if(prev != NULL && prev->value >= root->value){
            return 0 ;
        }
        prev = root ;
        return BstOrNot(root->right);
    }else{
        return 1 ;
    }
}

int main(){
    struct Node* root = NULL ;
    int noode , value ;
    printf("Enter Number of Node : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        root = Inserting(root,value);
    }
    if(BstOrNot(root) == 1){
        printf("Its a Binary Search tree !!\n");
    }else{
        printf("Not a Binary Search tree !!\n");
    }
    InOrder(root);
    printf("\n");
    root = Inserting(root,20);
    InOrder(root);
    return 0 ;
}