#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack *ptr) {
    if(ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct stack *ptr) {
    if(ptr->top == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
void push(struct stack *ptr, char data) {
    if(isFull(ptr)) {
        printf("The Given Stack is Full");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Given stack is Empty");
        return 0;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int match(char *exp) {
    struct stack *ptr;
    ptr->size = 20;
    ptr->top = -1;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));

    for(int i=0; exp[i] != '\0'; i++) {
        if(exp[i] == '(') {
            push(ptr, exp[i]);
        } else if(exp[i] == ')') {
            if(isEmpty(ptr)) {
                return 0;
            } else {
                pop(ptr);
            }
        }
    }
    if(isEmpty(ptr)) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
        char *exp = "5*10)) +(10+2)";

        if(match(exp)) {
            printf("In Given Expression Parenthesis is Match");
        } else {
            printf("In Given Expression Parenthesis is Not Match");
        }

return 0;
}