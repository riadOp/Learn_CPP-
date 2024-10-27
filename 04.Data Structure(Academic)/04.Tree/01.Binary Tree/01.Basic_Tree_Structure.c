#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* left;
    struct Node* right ;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}

//We are Creating This tree
//        10 
//       /  \
//     20   30
//    / \   / \
//   40 N  N   50  

int main(){
    struct Node* N1 = Creating(10);
    struct Node* N2 = Creating(20);
    struct Node* N3 = Creating(30);
    struct Node* N4 = Creating(40);
    struct Node* N5 = Creating(50);
    N1->left = N2 ;
    N1->right = N3 ;
    N2->left = N4 ;
    N3->right = N5 ;
    return 0;
}