#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};
int stackTop(struct stack *ptr) {
    int value = ptr->arr[ptr->top];
    return value;
}
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
void push(struct stack *ptr, int data) {
    if(isFull(ptr)) {
       printf("The Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        return -1;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int precedence(char ch) {
    if(ch == '*' || ch == '/') {
        return 3;
    } 
    if(ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}
int isOperator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        return 1;
    } else {
        return 0;
    }
}
char *infixToPostfix(char *infix) {
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char * postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i = 0; // Track InFix Travesal
    int j = 0; // Track PostFix Travesal
    while(infix[i] != '\0') {
        if(!isOperator(infix[i])) {
            postfix[j] = infix[i];
            j++;
            i++;
        } else {
            if(precedence(infix[i]) > precedence(stackTop(sp))) {
                push(sp, infix[i]);
                i++;
            } else {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)) {
        postfix[j] = pop(sp);
        j++;
    }
       postfix[j] = '\0';
       return postfix;  
}
 
int main() {

     char *infix = "x-y/z-k*d";
     printf("Postfix is %s", infixToPostfix(infix));


return 0;
}