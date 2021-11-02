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
void postOrder(struct node *root) {
    if(root != NULL) {
      printf("%d, ", root->data);
      postOrder(root->left);
      postOrder(root->right);
    }
}
int main() {
    struct node *root = creation(10);
    struct node *p1 = creation(5);
    struct node *p2 = creation(5);
    struct node *p11 = creation(2);
    struct node *p12 = creation(2);
    struct node *p21 = creation(2);
    struct node *p22 = creation(2);

    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = p22;
    
    postOrder(root);

return 0;
}