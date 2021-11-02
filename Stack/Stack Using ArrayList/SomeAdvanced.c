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
        printf("The Given Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Given Stack is Empty");
        return 0;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int peak(struct stack *ptr, int i) {
    if(ptr->top-i+1 < 0) {
       printf("You Entered a Incorrect Number\n");
       return 0;
    } else {
        int value = ptr->arr[ptr->top-i+1];
        return value;
    }
}
int main() {
     struct stack *p = (struct stack *)malloc(sizeof(struct stack));
     p->size = 5;
     p->top = -1;
     p->arr = (int *)malloc(p->size * sizeof(int));
     
     int num;
     for(int i=0; i<p->size; i++) {
         printf("Enter a Value at Position %d in Stack: ", i);
         scanf("%d", &num);
         push(p, num);
     }
     
     for(int i=1; i<p->size+1; i++) { 
     int result2 = peak(p, i);
     printf("The Value at index %d is %d\n", i, result2);
     }

    //  for(int i=0; i<p->size; i++) {
    //      int result = pop(p);
    //      printf("The Value at index %d is: %d \n", i, result);
    //  }

return 0;
}