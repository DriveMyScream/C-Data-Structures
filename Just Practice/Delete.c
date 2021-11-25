#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
}

struct Node *insertAtFirst(struct Node *head, int data) {
    struct Node *ptr;
    ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = 10;
    ptr->next = head;
    head = ptr;        // return ptr; bz ptr becomes new head
    return head;
};

struct Node *insertInBetween(struct Node *head, int data, int index) {
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while(i != index-1) {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct Node *insertAtEnd(struct Node *head, int data) {
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next != NULL) {
        p = p->next;
    }
    p->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
};
struct Node *insertAfterNode(struct Node *head, struct Node *index, int data) {
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    
    ptr->data = data;
    ptr->next = index->next;
    index->next = ptr;
    return head;
};
int main() {
     
return 0;
}