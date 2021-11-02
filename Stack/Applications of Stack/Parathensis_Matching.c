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
void push(struct stack *ptr, char value) {
    if(isFull(ptr)) {
        printf("The Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Given Stack is Empty");
        return -1;
    } else {
        char value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int parathensisMatching(char *exp) {
    struct stack *ptr;
    ptr->size = 20;
    ptr->top = -1;
    ptr->arr = (char *)malloc(ptr->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)  {
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
    char *exp = "2+3)*(5+20";

    if(parathensisMatching(exp)) {
         printf("The Given Expretion is Matched");
    } else {
         printf("The Given Parenthesis is Not Matched");
    }
return 0;
}