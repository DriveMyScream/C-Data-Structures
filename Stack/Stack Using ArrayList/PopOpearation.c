#include<stdio.h>
#include<stdlib.h>

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
        printf("The Stack is Full Or OverFlow\n");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Given stack is Empty\n");
        return -1;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));
    
    push(s, 10);
    push(s, 20);
    push(s, 30);
    push(s, 40);
    push(s, 50);
    push(s, 60); // This Value is Not inserted into a Stack Because of its Capacity is only of 5 element
    
    int result = pop(s);
    printf("The Value Pop form Stack is %d\n", result);
    
return 0;
}