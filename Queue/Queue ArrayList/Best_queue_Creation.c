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
void inqueue(struct queue *ptr, int data) {
    if(isFull(ptr)) {
        printf("The Queue is Full");
    } else {
        ptr->frontEnd++;
        ptr->arr[ptr->frontEnd] = data;
    }
}
int dequeue(struct queue *ptr) {
    if(isEmpty(ptr)) {
        return 1;
    } else {
        ptr->backEnd++;
        int value = ptr->arr[ptr->backEnd];
        return value;
    }
}
int peak(struct queue *ptr, int i) {
    int value = ptr->arr[ptr->frontEnd-i+1];
    return value;
}
int queueTop(struct queue *ptr) {
    int value = ptr->arr[ptr->frontEnd];
    return value;
}
int queueBottom(struct queue *ptr) {
    int value = ptr->arr[0];
    return value;
}
int main() {
    struct queue ptr;
    ptr.size = 7;
    ptr.frontEnd = -1;
    ptr.backEnd = -1;
    ptr.arr = (int *) malloc(ptr.size * sizeof(int));

    inqueue(&ptr, 10);
    inqueue(&ptr, 20);
    inqueue(&ptr, 30);
    inqueue(&ptr, 40);
    inqueue(&ptr, 50);
    inqueue(&ptr, 60);
    inqueue(&ptr, 70);

  
    int first = queueTop(&ptr);
    printf("The Top Element in Queue is: %d\n", first);

    int back = queueBottom(&ptr);
    printf("The Bottom Element in Queue is: %d\n", back);

    int Peak = peak(&ptr, 2);
    printf("The Element at index %d is: %d\n",3, Peak);
    
    if(isEmpty(&ptr)) {
        printf("The Queue is Empty\n");
    } else {
        printf("The Queue is Not Empty\n");
    }
    
    if(isFull(&ptr)) {
        printf("The Queue is Full\n");
    } else {
        printf("The Queue is Not Full\n");
    }
return 0;
}