#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    int i = 1;
    while(ptr != NULL) {
        printf("The Element at index %d is %d\n", i, ptr->data);
        ptr = ptr->next;
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
    struct Node *p = (struct Node *) malloc(sizeof(struct Node));
    if(p == NULL) {
         return 1;
    } else {
        return 0;
    }
}
struct Node *push(struct Node *top, int data) {
    if(isFull(top)) {
        printf("The Stack is OverFlow\n");
    } else {
        struct Node *n = (struct Node *) malloc(sizeof(struct Node));
        n->data = data;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct Node **top){
    if(isEmpty(*top)) {
        printf("The Stack is Empty");
        return 1;
    } else {
        struct Node *p = *top;
        *top = (*top)->next;
        int value = p->data;
        free(p);
        return value;
    }
}
int peak(struct Node *ptr, int i) {
    struct Node *p = ptr;
    for(int i=0; (i< i-1 && p!= NULL); i++) {
       p = p->next;
    }
    if(p != NULL) {
        return p->data;
    } else {
        return -1;
    }
}
int main() {
    struct Node *top = NULL;
    // int result1 = isEmpty(top);
    // int result2 = isFull(top);
    
    top = push(top, 10);
    top = push(top, 20);
    top = push(top, 30);
    top = push(top, 40);
    top = push(top, 50);
    top = push(top, 60);
    travesal(top);
    
    // int result = pop(&top);
    // printf("The Top Most Element is: %d\n", result);
    
    // travesal(top);

    int result3 = peak(top, 4);
    printf("%d", result3);

return 0;
}