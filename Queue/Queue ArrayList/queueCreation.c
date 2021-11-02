#include <stdio.h>
#include <stdlib.h>

struct queue {
    int size;
    int frontInd;
    int backInd;
    int *arr;
};
int isEmpty(struct queue *ptr) {
    if(ptr->frontInd == ptr->backInd) {
        return 1;
    } else {
        return 0;
    }
}
int isFull(struct queue *ptr) {
    if(ptr->frontInd == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
void inqueue(struct queue *ptr, int data) {
    if(isFull(ptr)) {
        printf("The Queue is Full");
    } else {
        ptr->frontInd++;
        ptr->arr[ptr->frontInd] = data;
    }
}
int dequeue(struct queue *ptr) {
    if(isEmpty(ptr)){
       return -1;
    } else {
        ptr->arr[ptr->backInd++];
        int value = ptr->arr[ptr->backInd];
        return value;
    }
}
int main() {
    struct queue ptr;
    ptr.size = 20;
    ptr.frontInd = -1;
    ptr.backInd = -1;
    ptr.arr = (int *) malloc(ptr.size * sizeof(int));

    inqueue(&ptr, 10);
    inqueue(&ptr, 20);
    inqueue(&ptr, 30);
    inqueue(&ptr, 40);
    inqueue(&ptr, 50);
    inqueue(&ptr, 60);

    printf("%d", dequeue(&ptr));

return 0;
}