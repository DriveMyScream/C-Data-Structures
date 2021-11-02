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
struct node *search(struct node *root, int key) {
    while(root != NULL) {
        if(root->data == key) {
            return root;
        } else if(root->data > key) {
            root = root->left;
        } else {
            root = root->right;
        }
    }
    return NULL;
}
int main() {
    struct node *root = creation(50);
    struct node *p1 = creation(40);
    struct node *p2 = creation(60);
    struct node *p11 = creation(30);
    struct node *p12 = creation(50);
    struct node *p21 = creation(55);
    struct node *p22 = creation(70);

    root->left = p1;
    root->right = p2;
    p1->left = p11;
    p1->right = p12;
    p2->left = p21;
    p2->right = p22;

    struct node *result = search(root, 70);
    if(result != NULL) {
        printf("ELEMENT = %d", result->data);
    } else {
        printf("The Element is Not Found");
    }

return 0;
}