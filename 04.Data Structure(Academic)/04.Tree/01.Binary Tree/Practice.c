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

void PreOrder(struct Node* root){
    if(root !=NULL){
    printf("%d->",root->value);
    PreOrder(root->left);
    PreOrder(root->right);
    }
}

void PostOrder(struct Node* root){
    if(root!=NULL){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d->",root->value);
    }
}

void InOrder(struct Node* root){
    if(root!=NULL){
        InOrder(root->left);
        printf("%d->",root->value);
        InOrder(root->right);
    }
}

int main(){
    struct Node* root = Creating(10);
    root->left = Creating(12);
    root->right = Creating(13);
    root->left->left = Creating(14);
    root->left->right = Creating(15);
    root->right->left = Creating(16);
    root->right->right = Creating(17);
    InOrder(root);
    printf("\n");
    PreOrder(root);
    printf("\n");
    PostOrder(root);
}