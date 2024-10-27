#include<stdio.h>
#include<stdlib.h>

struct Node{
    int value ;
    struct Node* left ;
    struct Node* right;
};

struct Node* Creating(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data ;
    newNode->left = NULL ;
    newNode->right = NULL ;
    return newNode ;
}

struct Node* Inserting(struct Node* root , int data){
    if(root == NULL){
        return Creating(data);
    }
    if(root->value > data){
        root->left = Inserting(root->left,data);
    }else{
        root->right = Inserting(root->right,data);
    }
    return root ;
}

int BstOrNot(struct Node* root){
    static struct Node* prev= NULL ;
    if(root!=NULL){
        if(!BstOrNot(root->left)){
            return 0 ;
        }
        if(prev != NULL && prev->value >= root->value){
            return 0;
        }
        prev = root ;
        return BstOrNot(root->right);
    }else{
        return 1 ;
    }
}

void InOrder(struct Node* root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d=>",root->value);
        InOrder(root->right);
    }
}

struct Node* Precestor(struct Node* root){
    root = root->left ;
    while(root->right != NULL){
        root = root->right ;
    }
    return root ;
}

struct Node* Deleting(struct Node* root, int data) {
    if (root == NULL) {
        return root; // Base case: if the tree is empty, return NULL
    }

    // If the data to be deleted is smaller than the root's value,
    // it lies in the left subtree
    if (data < root->value) {
        root->left = Deleting(root->left, data);
    }
    // If the data to be deleted is larger than the root's value,
    // it lies in the right subtree
    else if (data > root->value) {
        root->right = Deleting(root->right, data);
    }
    // If the data is equal to the root's value, this is the node to be deleted
    else {
        // Case 1: Node with only one child or no child
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp; // Return the right child to replace the current node
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp; // Return the left child to replace the current node
        }

        // Case 2: Node with two children
        // Find the in-order predecessor (largest in the left subtree)
        struct Node* pre = Precestor(root);

        // Copy the predecessor's value to the current node
        root->value = pre->value;

        // Delete the predecessor recursively from the left subtree
        // Update the left child pointer to reflect the removal
        root->left = Deleting(root->left, pre->value);
    }
    return root;
}


int main(){
    struct Node* root = NULL ;
    int noode , value ;
    printf("Enter NUmber of Node to Create : ");
    scanf("%d",&noode);
    for(int i = 1 ; i<=noode ; i++){
        printf("Enter value : ");
        scanf("%d",&value);
        root = Inserting(root,value);
    }
    if(BstOrNot(root) == 1){
        printf("Its a Binary Search Treee !\n");
    }else{
        printf("Not a Bianary Search tree !!\n");
    }
    InOrder(root);
    printf("\n");
    root = Deleting(root,10);
    InOrder(root);
    return 0 ;
}