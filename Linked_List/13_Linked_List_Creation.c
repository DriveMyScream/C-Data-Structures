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

   (*frist).data = 10;
   (*frist).next = second;

   (*second).data = 20;
   (*second).next = third;

   (*third).data = 30;
   (*third).next = fourth;

   (*fourth).data = 40;
   (*fourth).next = fifth;

   (*fifth).data = 50;
   (*fifth).next = NULL;

   travesal(frist);
return 0;
}