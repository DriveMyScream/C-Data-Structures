#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *head) {
    struct Node *ptr = head;
    int i = 1;
    while(ptr != NULL) {
        printf("The Element at index %d is %d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
}
struct Node *deleteAtFirst(struct Node *head) {
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteAtIndex(struct Node *head, int index) {
    struct Node *ptr = head;
    struct Node *pqr = head->next;
    int i = 1;
    while(i != index) {
        ptr = ptr->next;
        pqr = pqr->next;
        i++;
    }
    ptr->next = pqr->next;
    free(pqr);
    return head;
}
struct Node *deleteAtLast(struct Node *head) {
    struct Node *ptr = head;
    struct Node *pqr = head->next;
    while(pqr->next != NULL) {
        ptr = ptr->next;
        pqr = pqr->next;
    }
    ptr->next = pqr->next;
    free(pqr);
    return head;
}
struct Node *deleteByValue(struct Node *head, int value) {
    struct Node *ptr = head;
    struct Node *pqr = ptr->next;
    while(pqr->data != value && ptr->next != NULL) {
        ptr = ptr->next;
        pqr = pqr->next;
    }if(pqr->data == value) {
        ptr->next = pqr->next;
        free(pqr);
        return head;
    } 
  
}
    

int main() {
    struct Node *head  = (struct Node *) malloc(sizeof(struct Node));
    struct Node *second = (struct Node *) malloc(sizeof(struct Node));
    struct Node *third = (struct Node *) malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *) malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *) malloc(sizeof(struct Node));

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

    // head = deleteAtFirst(head);
    // travesal(head);

    // head = deleteAtIndex(head, 3);
    // travesal(head);
 
    //  head = deleteAtLast(head);
    //  travesal(head);
  
    head = deleteByValue(head, 30);
    travesal(head);

return 0;
}