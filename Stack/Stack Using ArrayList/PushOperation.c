#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
void push(struct stack *ptr, int value) {
    if(isFull(ptr)) {
        printf("Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int main() {
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("\nBefore Putting The Values in Stack\n");
    if(isEmpty(s)) {
        printf("The Given Stack is Empty \n");
    } else {
        printf("The Given Stack is Not Empty \n");
    }

    if(isFull(s)) {
        printf("The Given Stack is OverFlow \n");
    } else {
        printf("The Given Stack is Not OverFlow \n");
    }

    printf("\nAfter Putting The Values in Stack\n");
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    if(isEmpty(s)) {
        printf("The Given Stack is Empty \n");
    } else {
        printf("The Given Stack is Not Empty \n");
    }

    if(isFull(s)) {
        printf("The Given Stack is OverFlow \n");
    } else {
        printf("The Given Stack is Not OverFlow \n");
    }
return 0;
}