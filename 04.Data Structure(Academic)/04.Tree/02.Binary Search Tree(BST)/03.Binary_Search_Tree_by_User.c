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

//!USer defined Binary Search Tree 
struct Node* UserDefined_BST(struct Node* root , int data){
    if(root == NULL){
        return Creating(data);  //! watting for the leaf Node 
    }
    if(data < root->value){
        root->left = UserDefined_BST(root->left,data); // ! Comparing values and keep treversing to left and add valure
    }else{
        root->right = UserDefined_BST(root->right,data); // ! Comparing values and keep treversing to right and add valure
    }
    return root ;
}


//* Checking BSt or not 
int IsBst(struct Node* root){
    static struct Node* prev = NULL ;
    if(root != NULL){
        if(!IsBst(root->left)){
            return 0 ;
        }
        if(prev != NULL && root->value <= prev->value){
            return 0 ;
        }
        prev = root ;
        return IsBst(root->right);
    }else{
        return 1 ;
    }
}

void Inorder(struct Node* root){
    if(root != NULL){
        Inorder(root->left);
        printf("%d->",root->value);
        Inorder(root->right);
    }
}


int main(){
    int noode  , value ; 
    struct Node* root = NULL ;
    printf("Enter Number of Node : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        root = UserDefined_BST(root,value);
    }
    Inorder(root);
    printf("\n");
  
    if(IsBst(root) == 1){
        printf("Its a Binary Search tree !!\n");
    }else{
        printf("Not a Binary Search tree!!\n");
    }
    return 0 ;
}