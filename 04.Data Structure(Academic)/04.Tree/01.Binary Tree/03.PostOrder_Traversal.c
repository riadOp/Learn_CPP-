#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* left ;
    struct Node* right ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node* )malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->left = NULL;
    newNode->right = NULL ;
    return newNode ;
}

//Tree that we are Creating 
//           7 
//        /     \
//     10        11 
//    /  \      /  \
//   40  30    70   80
//  /         
// 100 
// / \ 
//    200   

// void PreOrder(struct Node* root){
//     if(root !=NULL){
//         printf("%d->",root->value);
//         PreOrder(root->left);
//         PreOrder(root->right);
//     }
// }

void PostOrder(struct Node* root){
    if(root != NULL ){
        PostOrder(root->left);
        PostOrder(root->right);
        printf("%d->",root->value);
    }
}

int main(){
    struct Node* root = Creating(7);
    struct Node* val1 = Creating(10);
    struct Node* val2 = Creating(11);
    struct Node* val3 = Creating(40);
    struct Node* val4 = Creating(30);
    struct Node* val5 = Creating(70);
    struct Node* val6 = Creating(80);
    struct Node* val7 = Creating(100);

    root->left = val1 ;
    val1->left = val3 ;
    val1->right = val4 ;
    val3->left = val7 ;
    root->right = val2 ;
    val2->left = val5 ;
    val2->right = val6 ;
    val7->right = Creating(200);
    PostOrder(root);
}