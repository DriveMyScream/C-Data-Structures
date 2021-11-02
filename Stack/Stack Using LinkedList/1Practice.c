#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *top) {
    int i = 1;
    while(top != NULL) {
        printf("The Element at index %d is %d\n", i, top->data);
        top = top->next;
        i++;
    }
}
int isEmpty(struct Node *top) {
    if(top == NULL) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct Node *top) {
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL) {
        return 1;
    } else {
        return 0;
    }
}
struct Node *push(struct Node *top, int data) {
    if(isFull(top)) {
        printf("The Stack is Overflow");
    } else {
        struct Node *p = (struct Node *) malloc(sizeof(struct Node));
        p->data = data;
        p->next = top;
        top = p;
        return top;
    }
}
int pop(struct Node **top) {
    if(isEmpty(*top)) {
       return 1;
    } else {
        struct Node *p = *top;
        *top = (*top)->next;
        int value = p->data;
        free(p);
        return value;
    }
}
int main() {
    struct Node *top = NULL;

    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    top = push(top, 60);
    travesal(top);

    int result = pop(&top);
    printf("The Value of Element at index %d is %d\n", 1, result);
   
    travesal(top);
return 0;
}