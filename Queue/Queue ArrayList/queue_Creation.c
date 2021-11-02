#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int frontEnd;
    int backEnd;
    int *arr;
};
int isEmpty(struct queue *ptr) {
    if(ptr->frontEnd == ptr->backEnd) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct queue *ptr) {
    if(ptr->frontEnd == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
void inQueue(struct queue *ptr, int value) {
    if(isFull(ptr)) {
        printf("The Queue is Full \n");
    } else {
        ptr->frontEnd++;
        ptr->arr[ptr->frontEnd] = value;
    }
}
int deQueue(struct queue *ptr) {
    if(isEmpty(ptr)) {
        printf("The Queue is Empty \n");
    } else {
        ptr->backEnd++;
        int value = ptr->arr[ptr->backEnd];
        return value;
    }
}
int Queuepeak(struct queue *ptr, int i) {
    int value = ptr->arr[ptr->frontEnd-i+1];
    return value;
}
int QueueTop(struct queue *ptr) {
    int value = ptr->arr[ptr->frontEnd];
    return value;
}
int QueueBottom(struct queue *ptr) {
    int value = ptr->arr[0];
    return value;
}
int main() {
    struct queue ptr;
    ptr.size = 5;
    ptr.frontEnd = -1;
    ptr.backEnd = -1;
    ptr.arr = (int *) malloc(ptr.size * sizeof(int));

    inQueue(&ptr, 10);
    inQueue(&ptr, 20);
    inQueue(&ptr, 30);
    inQueue(&ptr, 40);
    inQueue(&ptr, 50);

    printf("The Top Element is %d\n", QueueTop(&ptr));
    printf("The Bottom Element is %d\n", QueueBottom(&ptr));

    printf("deQueue The Element in Queue %d\n", deQueue(&ptr));

    printf("The Element at index 3 is %d", Queuepeak(&ptr, 3));


return 0;
}