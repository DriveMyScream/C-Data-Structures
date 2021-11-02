#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *creation(int data) {
    struct node *n;
    n = (struct node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
void inOrderTravesal(struct node *root) {
    if(root != NULL) {
        inOrderTravesal(root->left);
        printf("%d, ", root->data);
        inOrderTravesal(root->right);
    }
}
int main() {
    struct node *root = creation(5);
    struct node *p1 = creation(3);
    struct node *p2 = creation(6);
    struct node *p11 = creation(2);
    struct node *p12 = creation(4);
    struct node *p21 = creation(3);
    struct node *p22 = creation(7);

    //         5
    //     3       6
    //  1   4   4    7 

    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = p22;

    inOrderTravesal(root);
return 0;
}