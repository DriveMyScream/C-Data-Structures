#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int rare;
    int front;
    int *arr;
};
int isFull(struct queue *ptr) {
    if(((ptr->rare+1) % ptr->size) == ptr->front) {
        return 1;
    } else {
        return 0;
    }
}
int isEmpty(struct queue *ptr) {
    if(ptr->front == ptr->rare) {
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
        printf("The Queue is Empty\n");
    } else {
        ptr->front = (ptr->front+1) % ptr->size;
        int data = ptr->arr[ptr->front];
        return data;
    }
}
int main() {
    struct queue ptr;
    ptr.size = 6;
    ptr.rare = 0;
    ptr.front = 0;
    ptr.arr = (int *) malloc(ptr.size * sizeof(int));

    inQueue(&ptr, 10);
    inQueue(&ptr, 20);
    inQueue(&ptr, 30);
    inQueue(&ptr, 40);
    inQueue(&ptr, 50);

    printf("The DeQueue Element is %d \n",deQueue(&ptr));


return 0;
}