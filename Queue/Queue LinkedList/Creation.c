#include <stdio.h>
#include <stdlib.h>

struct Node *rare = NULL;
struct Node *front = NULL;

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    int i = 1;
    struct Node *p = ptr;
    printf("Printing The Element of Linked List\n");
    while(p != NULL) {
        printf("The Element at index %d is %d\n", i, p->data);
        p = p->next;
        i++;
    }
}
void inQueue(int data) {
    struct Node *ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node));
    if(ptr == NULL) {
        printf("The Queue is Full\n");
    } else {
        ptr->data = data;
        ptr->next = NULL;
      if(front == NULL) {
          front = rare = ptr;
      } else {
          rare->next = ptr;
          rare = ptr;
      }

    }
}
int deQueue() {
    if(front == NULL) {
        printf("The Queue is Empty\n");
        return 0;
    } else {
        struct Node *ptr = front;
        int value = ptr->data;
        front = front->next;
        free(ptr);
        return value;
    }
}
int main() {
    

    inQueue(10);
    inQueue(20);
    inQueue(30);
    inQueue(40);
    inQueue(50);
    inQueue(60);
    
    printf("deQueue a Element %d\n", deQueue());
    printf("deQueue a Element %d\n", deQueue());
    printf("deQueue a Element %d\n", deQueue());
    
    travesal(front);


return 0;
}