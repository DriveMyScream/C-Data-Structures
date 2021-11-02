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
        printf("The Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
char pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Stack is Empty");
    } else {
        char data = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return data;
    }
} 
int match(char a, char b) {
    if(a == '(' && b == ')') {
        return 1;
    }
    if(a == '[' && b == ']') {
        return 1;
    }
    if(a == '{' && b == '}') {
        return 1;
    }
    return 0;
    }
int matchMulti(char * exp) {
    struct stack *ptr;
    ptr->size = 20;
    ptr->top = -1;
    ptr->arr = (char *) malloc(ptr->size * sizeof(char));
    char popped;

    for(int i=0; exp[i] != '\0'; i++) {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(ptr, exp[i]);
        } else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if(isEmpty(ptr)) {
                return 0;
            } else {
                popped = pop(ptr);
                if(match(popped, exp[i])) {
                    return 1;
                } else {
                    return 0;
                }
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
    char * exp = "[1+2]+(2+3)*{{5+10";
    
    if(matchMulti(exp)) {
        printf("This Is an Balanced Matching");
    } else {
        printf("This Is an UnBalanced Matching");
    }
return 0;
}