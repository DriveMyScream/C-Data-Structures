#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
int main() {
   struct Node *root;
   root = (struct Node *) malloc(sizeof(struct Node));
   root->data = 10;
   root->left = NULL;
   root->right = NULL;

   struct Node *n1;
   n1 = (struct Node *) malloc(sizeof(struct Node));
   n1->data = 20;
   n1->left = NULL;
   n1->right = NULL;

   struct Node *n2;
   n2->data = 30;
   n2->left = NULL;
   n2->right = NULL;
   
   root->left = n1;
   root->right = n2;


   
   
   
return 0;
}