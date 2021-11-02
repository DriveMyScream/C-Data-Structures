#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    while(ptr != NULL) {
        printf("The Element is:%d \n", (*ptr).data);
        ptr = (*ptr).next;
    }
}
struct Node *insertionAtNode(struct Node *frist, int data) {
    struct Node *ptr;
    ptr = (struct Node *)malloc(sizeof(struct Node));
    (*ptr).data = data;
    (*ptr).next = frist;
    return ptr;
}

int main() {
   struct Node *frist;
   struct Node *second;
   struct Node *third;
   struct Node *fourth;
   struct Node *fifth;
   
   frist = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));
   fourth = (struct Node *)malloc(sizeof(struct Node));
   fifth = (struct Node *)malloc(sizeof(struct Node));
   
   (*frist).data = 20;
   (*frist).next = second;

   (*second).data = 30;
   (*second).next = third;

   (*third).data = 40;
   (*third).next = fourth;

   (*fourth).data = 50;
   (*fourth).next = fifth;

   (*fifth).data = 60;
   (*fifth).next = NULL;

   frist = insertionAtNode(frist, 10);
   travesal(frist);

return 0;
}