#include<stdio.h>
#include<stdlib.h>

// Definition of the Node structure
struct Node {
    int value;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* Creating(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->value = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a new node in the BST
struct Node* BST_Creating(struct Node* root, int data) {
    if (root == NULL) {
        return Creating(data);
    }
    if (data < root->value) {
        root->left = BST_Creating(root->left, data);
    } else {
        root->right = BST_Creating(root->right, data);
    }
    return root;
}

// Check if the tree is a BST
int BST_Checker(struct Node* root) {
    static struct Node* prev = NULL;
    if (root != NULL) {
        if (!BST_Checker(root->left)) {
            return 0;
        }
        if (prev != NULL && root->value <= prev->value) {
            return 0;
        }
        prev = root;
        return BST_Checker(root->right);
    }
    return 1;
}

// Search for a node in the BST
struct Node* BST_Searching(struct Node* root, int data) {
    if (root == NULL || root->value == data) {
        return root; // Return the node if found, or NULL if not found
    }
    if (data > root->value) {
        return BST_Searching(root->right, data);
    }
    return BST_Searching(root->left, data);
}

// Find predecessor (rightmost node in left subtree)
struct Node* PreCessor(struct Node* root) {
    root = root->left;
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

// Delete a node from BST
struct Node* BST_Deleting(struct Node* root, int data) {
    if (root == NULL) {
        return NULL;
    }
    if (data > root->value) {
        root->right = BST_Deleting(root->right, data);
    } else if (data < root->value) {
        root->left = BST_Deleting(root->left, data);
    } else {
        // Node found
        if (root->left == NULL) {  // Case 1: No left child
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {  // Case 2: No right child
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Node has two children
        struct Node* pre = PreCessor(root);  // Find predecessor
        root->value = pre->value;  // Replace value with predecessor's value
        root->left = BST_Deleting(root->left, pre->value);  // Delete predecessor
    }
    return root;
}

// In-order traversal
void Inorder(struct Node* root) {
    if (root != NULL) {
        Inorder(root->left);
        printf("%d=>", root->value);
        Inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int noode, data;

    printf("Enter Number of Nodes: ");
    scanf("%d", &noode);

    for (int i = 1; i <= noode; i++) {
        printf("Enter Value(%d): ", i);
        scanf("%d", &data);
        root = BST_Creating(root, data);
    }

    // Check if the tree is a valid BST
    if (BST_Checker(root) == 1) {
        printf("It is a BST !!\n");
    } else {
        printf("NOT a BST !!\n");
    }

    // Print in-order traversal of the BST
    Inorder(root);
    printf("\n");

    // Search for a node with value 3
    struct Node* result = BST_Searching(root, 3);
    if (result != NULL) {
        printf("Found: %d\n", result->value);  // Print found node's value
    } else {
        printf("Not Found\n");
    }

    // Delete node with value 3
    root = BST_Deleting(root, 3);
    
    // Print in-order traversal after deletion
    printf("Inorder after deletion: ");
    Inorder(root);
    printf("\n");

    return 0;
}
