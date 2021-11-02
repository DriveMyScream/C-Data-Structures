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
int stackTop(struct stack *ptr) {
    int top = ptr->arr[ptr->top];
    return top;

}
int stackBottom(struct stack *ptr) {
    int bottom = ptr->arr[0];
    return bottom;
}
void push(struct stack *ptr, int value) {
    if(isFull(ptr)) {
        printf("The Given Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int main() {
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size = 5;
    ptr->top = -1;
    ptr->arr = (int *)malloc(ptr->size * sizeof(int));

    int num;
    for(int i=0; i<ptr->size; i++) {
        printf("Enter a Element at index %d is: ", i);
        scanf("%d", &num);
        push(ptr, num);
    }

    int top = stackTop(ptr);
    printf("The Topmost element at Stack is %d\n", top);

    int bottom = stackBottom(ptr);
    printf("The Bottom most element at stack is %d\n", bottom);
return 0;
}