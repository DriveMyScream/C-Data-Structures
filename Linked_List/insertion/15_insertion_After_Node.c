#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    int i = 1;
    while(ptr != NULL) {
        printf("The Element at Index %d is %d \n", i, (*ptr).data);
        ptr = (*ptr).next;
        i++;
    }
}
struct Node *insertAfterNode(struct Node *frist, struct Node *prevNode, int data) {
    struct Node *third;
    third = (struct Node *)malloc(sizeof(struct Node));
    (*third).data = data;
    (*third).next = (*prevNode).next;
    (*prevNode).next = third;

    return frist;
};
int main() {
    struct Node *frist;
    struct Node *second;
    struct Node *fourth;
    struct Node *fifth;

    frist = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    (*frist).data = 10;
    (*frist).next = second;

    (*second).data = 20;
    (*second).next = fourth;

    (*fourth).data = 40;
    (*fourth).next = fifth;

    (*fifth).data = 50;
    (*fifth).next = NULL;

    frist = insertAfterNode(frist, second, 30);
    travesal(frist);


return 0;
}