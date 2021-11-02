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
void postOrder(struct Node *root) {
    if(root != NULL) {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d, ", root->data);
    }
}
int main() {
   struct Node *root = creation(10);
   struct Node *p1 = creation(5);
   struct Node *p2 = creation(5);
   struct Node *p11 = creation(2);
   struct Node *p12 = creation(2);
   struct Node *p21 = creation(2);
   struct Node *p22 = creation(2);

   root->left = p1;
   root->right = p2;
   p1->left = p11;
   p1->right = p12;
   p2->left = p21;
   p2->right = p22;

   postOrder(root);

return 0;
}