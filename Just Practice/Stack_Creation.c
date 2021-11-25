#include <stdio.h>
#include <stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
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
void push(struct stack *ptr, int value) {
    if(isFull(ptr)) {
        printf("The Stack is OverFlow\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Stack is Empty\n");
        return -1;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int peak(struct stack *ptr, int i) {
    int value = ptr->arr[ptr->top-i+1];
    return value;
}
int stackTop(struct stack *ptr) {
    int value = ptr->arr[ptr->top];
    return value;
}
int stackBottom(struct stack *ptr) {
    int value = ptr->arr[0];
    return value;
}
int main() {
    struct stack *ptr = (struct stack *) malloc(sizeof(struct stack));
    ptr->size = 10;
    ptr->top = -1;
    ptr->arr = (int *) malloc(ptr->size * sizeof(int));

    push(ptr, 10);
    push(ptr, 20);
    push(ptr, 30);
    push(ptr, 40);
    push(ptr, 50);
     
    printf("The Top Element is: %d\n", stackTop(ptr));
    printf("The Bottom Element is: %d\n", stackBottom(ptr));

    printf("The Element at index 3 is %d\n", peak(ptr, 3));

return 0;
}