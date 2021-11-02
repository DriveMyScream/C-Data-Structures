#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *print) {
    int i = 1;
    while(print != NULL) {
        printf("The Element at index %d is %d \n", i++, (*print).data);
        print = (*print).next;
    }
}
struct Node insertionAtIndex(struct Node *frist, int data, int index) {
    struct Node *fifth;
    fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = frist;
    int i = 0;
    while(i != index-1) {
        p = (*p).next;
        i++;
    }
    (*fifth).data = data;
    (*fifth).next = (*p).next;
    (*p).next = fifth;
    return frist;
}
int main() {
    struct Node *frist;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *sixth;

    frist = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    sixth = (struct Node *)malloc(sizeof(struct Node));

    (*frist).data = 10;
    (*frist).next = second;

    (*second).data = 20;
    (*second).next = third;

    (*third).data = 30;
    (*third).next = fourth;

    (*fourth).data = 40;
    (*fourth).next = sixth;

    (*sixth).data = 60;
    (*sixth).next = NULL;

    frist = insertionAtIndex(frist, 50, 6);
    travesal(frist);

return 0;
}