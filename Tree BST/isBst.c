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
}
void preOrderTravesal(struct node *root) {
    if(root != NULL) {
        printf("%d, ", root->data);
        preOrderTravesal(root->left);
        preOrderTravesal(root->right);
    }
}
void inOrderTravesal(struct node *root) {
    if(root != NULL) {
        inOrderTravesal(root->left);
        printf("%d, ", root->data);
        inOrderTravesal(root->right);
    }
}
void postOrderTravesal(struct node *root) {
    if(root != NULL) {
        postOrderTravesal(root->left);
        postOrderTravesal(root->right);
        printf("%d, ", root->data);
    }
}
int isBst(struct node *root) {
    static struct node *prev = NULL;
    if(root != NULL) {
       if(!isBst(root->left)) {
           return 0;
       }
       if(prev != NULL && root->data <= prev->data) {
           return 0;
       }
       prev = root;
       return isBst(root->right);
    } else {
        return 1;
    }
}
int main() {
     struct node *root = creation(50);
     struct node *p1 = creation(40);
     struct node *p2 = creation(60);
     struct node *p11 = creation(30);
     struct node *p12 = creation(45);
     struct node *p21 = creation(55);
     struct node *p22 = creation(70);

     root->left = p1;
     root->right = p2;
     p1->left = p11;
     p1->right = p12;
     p2->left = p21;
     p2->right = p22;
     
     preOrderTravesal(root);
     printf("\n");
     inOrderTravesal(root);
     printf("\n");
     postOrderTravesal(root);
     printf("\n");

     if(isBst) {
         printf("The Tree is Binary Search Tree\n");
     } else {
         printf("The Tree is Not Binary Search Tree\n");
     }

return 0;
}