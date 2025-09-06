
#include <stdio.h>
#include <stdlib.h>

#define MIN_DEGREE 2 // Minimum degree of B-tree

// Node structure of a B-Tree
struct BTreeNode {
    int *keys;
    int t;
    struct BTreeNode **C; // Child pointers
    int n;                // Number of keys
    int leaf;              // Leaf status
};

// Function to create a new B-Tree node
struct BTreeNode *createNode(int t, int leaf) {
    struct BTreeNode *newNode = (struct BTreeNode *)malloc(sizeof(struct BTreeNode));
    newNode->t = t;
    newNode->leaf = leaf;
    newNode->keys = (int *)malloc((2 * t - 1) * sizeof(int));
    newNode->C = (struct BTreeNode **)malloc((2 * t) * sizeof(struct BTreeNode *));
    newNode->n = 0;
    return newNode;
}

// Function to traverse the B-tree
void traverse(struct BTreeNode *root) {
    if (root != NULL) {
        int i;
        for (i = 0; i < root->n; i++) {
            if (!root->leaf)
                traverse(root->C[i]);
            printf("%d ", root->keys[i]);
        }
        if (!root->leaf)
            traverse(root->C[i]);
    }
}

// Function to search a key in the B-tree
struct BTreeNode *search(struct BTreeNode *root, int k) {
    int i = 0;
    while (i < root->n && k > root->keys[i])
        i++;
    if (root->keys[i] == k)
        return root;
    if (root->leaf)
        return NULL;
    return search(root->C[i], k);
}

// Function to split a child y of the node x
void splitChild(struct BTreeNode *x, int i, struct BTreeNode *y) {
    int t = y->t;
    struct BTreeNode *z = createNode(t, y->leaf);
    z->n = t - 1;

    for (int j = 0; j < t - 1; j++)
        z->keys[j] = y->keys[j + t];

    if (!y->leaf) {
        for (int j = 0; j < t; j++)
            z->C[j] = y->C[j + t];
    }

    y->n = t - 1;

    for (int j = x->n; j >= i + 1; j--)
        x->C[j + 1] = x->C[j];

    x->C[i + 1] = z;

    for (int j = x->n - 1; j >= i; j--)
        x->keys[j + 1] = x->keys[j];

    x->keys[i] = y->keys[t - 1];
    x->n = x->n + 1;
}

// Function to insert a key into a non-full node
void insertNonFull(struct BTreeNode *x, int k) {
    int i = x->n - 1;

    if (x->leaf) {
        while (i >= 0 && x->keys[i] > k) {
            x->keys[i + 1] = x->keys[i];
            i--;
        }
        x->keys[i + 1] = k;
        x->n = x->n + 1;
    } else {
        while (i >= 0 && x->keys[i] > k)
            i--;
        i++;
        if (x->C[i]->n == 2 * x->t - 1) {
            splitChild(x, i, x->C[i]);
            if (x->keys[i] < k)
                i++;
        }
        insertNonFull(x->C[i], k);
    }
}

// Function to insert a key in the B-Tree
struct BTreeNode *insert(struct BTreeNode *root, int k, int t) {
    if (root == NULL) {
        root = createNode(t, 1);
        root->keys[0] = k;
        root->n = 1;
    } else {
        if (root->n == 2 * t - 1) {
            struct BTreeNode *s = createNode(t, 0);
            s->C[0] = root;
            splitChild(s, 0, root);
            int i = 0;
            if (s->keys[0] < k)
                i++;
            insertNonFull(s->C[i], k);
            root = s;
        } else
            insertNonFull(root, k);
    }
    return root;
}

// Utility function to get predecessor
int getPred(struct BTreeNode *node) {
    while (!node->leaf)
        node = node->C[node->n];
    return node->keys[node->n - 1];
}

// Utility function to get successor
int getSucc(struct BTreeNode *node) {
    while (!node->leaf)
        node = node->C[0];
    return node->keys[0];
}

// Function to remove a key from the node
void removeKey(struct BTreeNode *root, int k) {
    int i = 0;
    while (i < root->n && root->keys[i] < k)
        i++;
    
    if (i < root->n && root->keys[i] == k) {
        if (root->leaf) {
            for (int j = i + 1; j < root->n; ++j)
                root->keys[j - 1] = root->keys[j];
            root->n--;
        } else if (root->C[i]->n >= root->t) {
            int pred = getPred(root->C[i]);
            root->keys[i] = pred;
            removeKey(root->C[i], pred);
        } else if (root->C[i + 1]->n >= root->t) {
            int succ = getSucc(root->C[i + 1]);
            root->keys[i] = succ;
            removeKey(root->C[i + 1], succ);
        } else {
            struct BTreeNode *child = root->C[i];
            struct BTreeNode *sibling = root->C[i + 1];
            child->keys[child->n] = k;
            for (int j = 0; j < sibling->n; j++)
                child->keys[child->n + 1 + j] = sibling->keys[j];
            for (int j = 0; j <= sibling->n; j++)
                child->C[child->n + 1 + j] = sibling->C[j];
            child->n += sibling->n + 1;
            for (int j = i + 1; j < root->n; j++)
                root->keys[j - 1] = root->keys[j];
            for (int j = i + 2; j <= root->n; j++)
                root->C[j - 1] = root->C[j];
            root->n--;
            free(sibling);
            removeKey(child, k);
        }
    } else {
        if (!root->leaf) {
            if (root->C[i]->n < root->t)
                return;
            removeKey(root->C[i], k);
        }
    }
}

// Main function
int main() {
    int t = MIN_DEGREE;
    struct BTreeNode *root = NULL;

    root = insert(root, 10, t);
    root = insert(root, 20, t);
    root = insert(root, 5, t);
    root = insert(root, 6, t);
    root = insert(root, 12, t);
    root = insert(root, 30, t);
    root = insert(root, 7, t);
    root = insert(root, 17, t);

    printf("Traversal of the constructed B-Tree is:\n");
    traverse(root);
    printf("\n");

    printf("Deleting 6...\n");
    removeKey(root, 6);
    traverse(root);
    printf("\n");

    printf("Deleting 13...\n");
    removeKey(root, 13);
    traverse(root);
    printf("\n");

    return 0;
}