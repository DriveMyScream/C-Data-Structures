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
int main() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf("The Stack has Been Created Succesfully \n");

//  Adding Element Manually 
    // s->arr[0] = 10;
    // s->top++; 
    
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