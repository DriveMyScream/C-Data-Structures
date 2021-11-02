#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int rare;
    int front;
    int *arr;
};
int isEmpty(struct queue *ptr) {
    if(ptr->front == ptr->rare) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct queue *ptr) {
    if(((ptr->rare+1) % ptr->size) == ptr->front) {
        return 1;
    } else {
        return 0;
    }
}
void inQueue(struct queue *ptr, int data) {
    if(isFull(ptr)) {
        printf("The Queue is Full\n");
    } else {
        ptr->rare = (ptr->rare+1) % ptr->size;
        ptr->arr[ptr->rare] = data;
    }
}
int deQueue(struct queue *ptr) {
    if(isEmpty(ptr)) {
        printf("The Queue is Full\n");
        return 0;
    } else {
        ptr->front = (ptr->front+1) % ptr->size;
        int value = ptr->arr[ptr->front];
        return value;
    }
}
int main() {
    struct queue ptr;
    ptr.size = 5;
    ptr.front = 0;
    ptr.rare = 0;
    ptr.arr = (int *) malloc(ptr.size * sizeof(int));

    inQueue(&ptr, 10);
    inQueue(&ptr, 20);
    inQueue(&ptr, 30);
    inQueue(&ptr, 40);

    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));
 
    inQueue(&ptr, 50);
    inQueue(&ptr, 60);
    inQueue(&ptr, 70);
    inQueue(&ptr, 80);

    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));
    printf("The deQueue Element is %d\n", deQueue(&ptr));


return 0;
}