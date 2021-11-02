#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node* creation(int data) {
     struct Node *n;
     n = (struct Node *) malloc(sizeof(struct Node));
     n->data = data;
     n->left = NULL;
     n->right = NULL;
}
int main() {
    struct Node *root = creation(10);
    struct Node *n1 = creation(20);
    struct Node *n2 = creation(30);

    root->left = n1;
    root->right = n2;
return 0;
}