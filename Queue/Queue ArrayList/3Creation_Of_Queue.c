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
    if(ptr->rare == ptr->size-1) {
        return 1;
    } else {
        return 0;
    }
}
void inQueue(struct queue *ptr, int data) {
    if(isFull(ptr)) {
        printf("The Queue is Full");
    } else {
        ptr->rare++;
        ptr->arr[ptr->rare] = data;
    }
}
int deQueue(struct queue *ptr) {
    if(isEmpty(ptr)) {
        return 0;
    } else {
        ptr->front++;
        int value = ptr->arr[ptr->front];
        return value;
    }
}
int peak(struct queue *ptr, int i) {
    int value = ptr->arr[ptr->rare-i+1];
    return value;
}
int QueueTop(struct queue *ptr) {
    int value = ptr->arr[ptr->rare];
    return value;
}
int QueueBottom(struct queue *ptr) {
    int value = ptr->arr[0];
    return value;
}
int main() {
   struct queue ptr;
   ptr.size = 6;
   ptr.front = -1;
   ptr.rare = -1;
   ptr.arr = (int *) malloc(ptr.size * sizeof(int));
 
   inQueue(&ptr, 10);
   inQueue(&ptr, 20);
   inQueue(&ptr, 30);
   inQueue(&ptr, 40);
   inQueue(&ptr, 50);
   inQueue(&ptr, 60);
 
   int first = QueueTop(&ptr);
   printf("The First Element is %d\n", first);
   
   int bottom = QueueBottom(&ptr);
   printf("The Last Element is %d\n", bottom);
   
   int index = peak(&ptr, 3);
   printf("The Element at index 3 is %d\n", index);

   
return 0;
}