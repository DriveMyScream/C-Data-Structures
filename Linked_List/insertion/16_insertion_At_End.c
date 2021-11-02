#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void transversal(struct Node *ptr) {
    int i = 1;
    while(ptr != NULL) {
        printf("The Value of Element at index %d is %d \n", i=i+1, (*ptr).data);
        ptr = (*ptr).next;
    }
}
struct Node *insertAtLast(struct Node *frist, int data) {
    struct Node *fifth;
    fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = frist;
    while((*p).next != NULL) {
        p = (*p).next;
    }
    (*fifth).data = 50;
    (*p).next = fifth;
    (*fifth).next = NULL;
    return frist;
}
int main() {
     struct Node *frist;
     struct Node *second;
     struct Node *third;
     struct Node *fourth;
     
     frist = (struct Node *)malloc(sizeof(struct Node));
     second = (struct Node *)malloc(sizeof(struct Node));
     third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));

     (*frist).data = 10;
     (*frist).next = second;

     (*second).data = 20;
     (*second).next = third;

     (*third).data = 30;
     (*third).next = fourth;

     (*fourth).data = 40;
     (*fourth).next = NULL;

     frist = insertAtLast(frist, 50);
     transversal(frist);
return 0;
}