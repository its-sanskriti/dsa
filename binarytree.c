#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* create_node(int data){
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void preorder(struct Node* node){
    if(node == NULL)
        return;
          printf("%d\t",node->data);
          preorder(node->left);
          preorder(node->right);
}
void inorder(struct Node* node){
    if(node == NULL)
        return;
          
          inorder(node->left);
          printf("%d\t",node->data);
          inorder(node->right);
}

void postorder(struct Node* node){
    if(node == NULL)
        return;
          postorder(node->left);
          postorder(node->right);
          printf("%d\t",node->data);
}

int main(){
    struct Node*root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->right->left = create_node(5);
    root->left->right = create_node(6);

    printf("preorder traversal \n");
    preorder(root);
    printf("\n");
    printf("inorder traversal \n");
    inorder(root);
    printf("\n");
    printf("postorder traversal \n");
    postorder(root);
    printf("\n");

return 0;
}