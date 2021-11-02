#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *head) {
    struct Node *ptr = head;
    int i = 1;
    while(ptr->next != head) {
        printf("The Value of Element at index %d is %d \n", i, (*ptr).data);
        ptr = ptr->next;
        i++;
    }
    printf("The Value of Element at index %d is %d\n", i, ptr->data);
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

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = head;

    travesal(head);
return 0;
}