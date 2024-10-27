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

/*We are Creating this tree 
              7
            /   \
           10   20
          / \  /  \
        30  40 N  50 */

void PreOrder(struct Node* root){
    if(root != NULL){
        printf("%d->",root->value);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int main(){
    struct Node* root = Creating(7);
    struct Node* val1 = Creating(10);
    struct Node* val2 = Creating(20);
    struct Node* val3 = Creating(30);
    struct Node* val4 = Creating(40);
    struct Node* val5 = Creating(50);

    root->left = val1 ;
    root->right = val2 ;
    val1->left = val3 ;
    val1->right = val4 ;
    val2->right = val5 ;
    PreOrder(root);
    return 0 ;
}