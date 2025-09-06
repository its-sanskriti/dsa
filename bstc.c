#include <stdio.h>
#include <stdlib.h>
// Define structure for binary search tree node
typedef struct Node {
int data;
struct Node* left;
struct Node* right;
} Node;
// Function to create a new node
Node* createNode(int data) {
Node* newNode =
(Node*)malloc(sizeof(Node));
newNode->data = data;
newNode->left = NULL;
newNode->right = NULL;
return newNode;
}
// Function to find mini element in right subtree
Node* findMinNode(Node* node) {
while (node->left != NULL) {
node = node->left;
}
return node;
}
// Function to delete element from BST
Node* delete(Node* root, int data) {
if (root == NULL) {
return root;
}
if (data < root->data) {
root->left = delete(root->left, data);
} else if (data > root->data) {
root->right = delete(root->right, data);
} else {
// Node with one child or no child
if (root->left == NULL) {
Node* temp = root->right;
free(root);
return temp;
} else if (root->right == NULL) {
Node* temp = root->left;
free(root);
return temp;
}
// Node with two children
Node* temp = findMinNode(root->right);
root->data = temp->data;
root->right = delete(root->right,temp->data);
}
return root;
}
// Function to insert an element into the binary search tree
Node* insert(Node* root, int data) {
if (root == NULL) {
return createNode(data);
}
if (data < root->data) {
root->left = insert(root->left, data);
} else if (data > root->data) {
root->right = insert(root->right, data);
}
return root;
}
// Function to perform an in-order traversal
void inorderTraversal(Node* root) {
if (root != NULL) {
inorderTraversal(root->left);
printf("%d ", root->data);
inorderTraversal(root->right);
}
}
int main() {
Node* root = NULL;
// Insert elements into the binary search tree
root = insert(root, 10);
root = insert(root, 5);
root = insert(root, 15);
root = insert(root, 3);
root = insert(root, 7);
root = insert(root, 12);
root = insert(root, 20);
printf("Inorder traversal of the BST: ");
inorderTraversal(root);
printf("\n");
// Delete an element from the binary search tree
root = delete(root, 15);
printf("Inorder traversal of the BST after deleting 15: ");
inorderTraversal(root);
printf("\n");
return 0;
}