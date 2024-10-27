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
    newNode->right = NULL;
    return newNode ;
}

// *Basic condition of Binary Search Tree 
// *Node of left subtree are lesser 
// * Node at right subtree are greater 
// * Left and right subtree are also BST 
// ! : No Duplicate Node
// ! : Child Node of any left must be smaller than parents and all ancestor including Root NOde 
// ! : Child Node of any Right must be larger than parents and all ancestor including Root NOde  

//Sample Binary Search Tree 
//*         10
//*      /     \
//*     7       12
//*    / \     /  \
//*   5  8    11    15 

void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d->",root->value);
        InOrder(root->right);
    }
}


int main(){
    struct Node* root = Creating(10);
    struct Node* val1 = Creating(7);
    struct Node* val2 = Creating(12);
    struct Node* val3 = Creating(5);
    struct Node* val4 = Creating(8);
    struct Node* val5 = Creating(11);
    struct Node* val6 = Creating(15);

    root->left = val1 ;
    root->right = val2 ;
    val1->left = val3 ;
    val1->right = val4 ;
    val2->left = val5 ;
    val2->right = val6 ;

    InOrder(root);
    return 0 ;
}