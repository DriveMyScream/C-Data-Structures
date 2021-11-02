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
void push(struct stack *ptr, int data) {
    if(isFull(ptr)) {
        printf("The Given Stack is OverFlow");
    } else {
        ptr->top++;
        ptr->arr[ptr->top] = data;
    }
}
int pop(struct stack *ptr) {
    if(isEmpty(ptr)) {
        printf("The Given Stack is Empty");
        return 1;
    } else {
        int value = ptr->arr[ptr->top];
        ptr->top = ptr->top-1;
        return value;
    }
}
int peak(struct stack *ptr, int i) {
    if(ptr->top-i+1 <0) {
        printf("You Entered Number is Not Exist in Stack \n");
        return 0;
    } else {
        int value = ptr->arr[ptr->top-i+1];
        return value;
    }
}
int main() {
     struct stack *p = (struct stack *) malloc(sizeof(struct stack));
     p->size = 5;
     p->top = -1;
     p->arr = (int *)malloc(p->size * sizeof(int));

     push(p, 10);
     push(p, 20);
     push(p, 30);
     push(p, 40);
     push(p, 50);

     int Pop = pop(p);
     printf("%d\n", Pop);
     
     int Peak = peak(p, 4);
     printf("The Value of Element at index 3 is %d\n", Peak);


     
return 0;
}