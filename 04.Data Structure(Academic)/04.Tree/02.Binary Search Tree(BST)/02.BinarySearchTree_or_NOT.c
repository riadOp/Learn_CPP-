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

//*Testing Tree
//*          20
//*       /     \ 
//*     6        30 
//*    /  \     /  \
//*   2   7    25    40 


void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d->",root->value);
        InOrder(root->right);
    }
}

int BSTorNot(struct Node* root){
    static struct  Node* prev = NULL ;  //* Keep track the previous Node or the address of leaf Node 
    if(root != NULL){  //Base Case
        if(!BSTorNot(root->left)){
            return 0 ;
        }
        if(prev != NULL && root->value <= prev->value){  //*Check pervious value is larger than the current One 
            return 0;
        }
        prev = root; //* Assigning the previous Node 
        return BSTorNot(root->right); 
    }else{
        return 1 ;
    }
}


int main(){
    struct Node* root = Creating(20);
    struct Node* val1 = Creating(6);
    struct Node* val2 = Creating(30);
    struct Node* val3 = Creating(2);
    struct Node* val4 = Creating(7);
    struct Node* val5 = Creating(25);
    struct Node* val6 = Creating(40);

    root->left = val1 ;
    root->right = val2 ;
    val1->left = val3 ;
    val1->right = val4 ;
    val2->left = val5 ;
    val2->right = val6 ;
    InOrder(root);
    printf("\n");
  
    if(BSTorNot(root) == 1){
        printf("Its a Binary Search tree !!\n");
    }else{
        printf("Not a Binary Search tree!!\n");
    }
    return 0 ;
}