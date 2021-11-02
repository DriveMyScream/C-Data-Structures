#include <stdio.h>
#include <stdlib.h>

struct Node {
    int size;
    int top;
    int *arr;
};
int isEmpty(struct Node *ptr) {
    if(ptr->top == -1) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct Node *ptr) {
    if(ptr->top == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
void push(struct Node *ptr, int value) {
    if(isFull(ptr)) {
        printf("The Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct Node *ptr) {
    if(isEmpty(ptr)) {
        printf("The Stack is Empty");
        return 0;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int peak(struct Node *ptr, int i) {
    if(ptr->top-i+1 < 0) {
        printf("You Entered Incorrect Number \n");
    } else {
        int value = ptr->arr[ptr->top-i+1];
        return value;
    }
}
int main() {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->size = 5;
    ptr->top = -1;
    ptr->arr = (int *) malloc(ptr->size * sizeof(int));
    
    int num;
    for(int i=0; i<ptr->size; i++) {
        printf("Enter a Number: ");
        scanf("%d", &num);
        push(ptr, num);
    }

    int Pop = pop(ptr);
    printf("The Value of Element is %d\n", Pop);

    int Peak = peak(ptr, 1);
    printf("The Value of Peak is %d\n", Peak);


return 0;
}