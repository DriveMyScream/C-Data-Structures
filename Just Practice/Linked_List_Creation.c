#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    int i = 1;
    struct Node *p = ptr;
    while(p != NULL) {
        printf("The Element at index %d is %d\n", i, p->data);
        p = p->next;
        i++;
    }
}
struct Node *insertionAtFrist(struct Node *head, int data) {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct Node *insertInBetween(struct Node *head, int data, int index) {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node *p = head;
    for(int i=1; i<index; i++) {
        p = p->next;
    }
    ptr->data = 100;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next != NULL) {
        p = p->next;
    } 
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
struct Node *insertAfterNode(struct Node *head, struct Node *node, int data) {
    struct Node *ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = node->next;
    node->next = ptr;
    return head;
}
int main() {
      struct Node *head;
      struct Node *second;
      struct Node *third;
      struct Node *fourth;
      struct Node *fifth;

      head = (struct Node *) malloc(sizeof(struct Node));
      second = (struct Node *) malloc(sizeof(struct Node));
      third = (struct Node *) malloc(sizeof(struct Node));
      fourth = (struct Node *) malloc(sizeof(struct Node));
      fifth = (struct Node *) malloc(sizeof(struct Node));

      head->data = 10;
      head->next = second;

      second->data = 20;
      second->next = third;

      third->data = 30;
      third->next = fourth;

      fourth->data = 40;
      fourth->next = fifth;

      fifth->data = 50;
      fifth->next = NULL;


    //   head = insertionAtFrist(head, 100);
    //   travesal(head);

    // head = insertInBetween(head, 100, 1);
    // travesal(head);

    // head = insertAtEnd(head, 100);
    // travesal(head);

       head = insertAfterNode(head, second, 100);
       travesal(head);

return 0;
}