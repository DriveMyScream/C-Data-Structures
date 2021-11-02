#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *creation(int data) {
    struct Node *n;
    n = (struct Node *) malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrder(struct Node *root) {
    if(root != NULL) {
        inOrder(root->left);
        printf("%d, ", root->data);
        inOrder(root->right);
    }
}
int main() {
    struct Node *root = creation(100);
    struct Node *p1 = creation(50);
    struct Node *p2 = creation(50);
    struct Node *p11 = creation(25);
    struct Node *p12 = creation(25);
    struct Node *p21 = creation(25);
    struct Node *p22 = creation(25);

    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = p22;

    inOrder(root);
return 0;
}