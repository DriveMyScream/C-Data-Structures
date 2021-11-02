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
void preOrder(struct node *root) {
    if(root != NULL) {
        printf("%d, ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main() {
   struct node *root = creation(100);
   struct node *p1 = creation(50);
   struct node *p2 = creation(50);
   struct node *p11 = creation(25);
   struct node *p12 = creation(25);
   struct node *p21 = creation(25);
   struct node *p22 = creation(25);

   root->left = p1;
   root->right = p2;
   p1->left = p11;
   p1->right = p12;
   p2->left = p21;
   p2->right = p22;

   preOrder(root);

return 0;
}