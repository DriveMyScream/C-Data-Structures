#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    while(ptr != NULL) {
       printf("The Element is: %d \n", (*ptr).data);
       ptr = (*ptr).next;
    }
}
struct Node * insertionAtFrist(struct Node *head, int data) {
    struct Node *ptr;
    ptr =(struct Node *)malloc(sizeof(struct Node));
    (*ptr).data = data;
    (*ptr).next = head;
    return ptr;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;
    
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    (*head).data = 10;
    (*head).next = second;

    (*second).data = 20;
    (*second).next = third;

    (*third).data = 30;
    (*third).next = fourth;

    (*fourth).data = 40;
    (*fourth).next = fifth;

    (*fifth).data = 50;
    (*fifth).next = NULL;
     
     head = insertionAtFrist(head, 0);
     travesal(head);
return 0;
}