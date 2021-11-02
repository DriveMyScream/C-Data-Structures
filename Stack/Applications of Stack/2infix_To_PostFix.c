#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    char *arr;
};
char stackTop(struct stack *ptr) {
    char value = ptr->arr[ptr->top];
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
int precedence(char ch) {
    if(ch == '*' || ch == '/') {
        return 3;
    } else if(ch == '+' || ch == '-') {
        return 2;
    } else {
        return 0;
    }
}
int operator(char ch) {
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/') {
        return 1;
    } else {
        return 0;
    }
}
void push(struct stack *ptr, char data) {
    if(isFull(ptr)) {
        printf("The Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
char pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Stack is underFlow");
        return -1;
    } else {
        char data = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return data;
    }
}
char *infixToPostFix(char *infix) {
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size = 20;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char * Postfix = (char *) malloc((strlen(infix)+1) * sizeof(char));
    int i = 0;
    int j = 0;
    while(infix[i] != '\0') {
       if(!operator(infix[i])) {
          Postfix[j] = infix[i];
          i++;
          j++;
       } else {
           if(precedence(infix[i]) > precedence(stackTop(sp))) {
               push(sp, infix[i]);
               i++;
           } else {
               Postfix[j] = pop(sp);
               j++;
           }
       }
     }
     while(!isEmpty(sp)) {
          Postfix[j] = pop(sp);
          j++;
     }
     Postfix[j] = '\0';
     return Postfix;
}

int main() {
    char *infix = "x-y/z-k*d";
     printf("Postfix is %s", infixToPostFix(infix));

return 0;
}