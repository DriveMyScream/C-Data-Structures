#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
void travesal(struct Node *ptr) {
    int i = 0;
    while(ptr != NULL) {
        printf("The Element at index %d is: %d \n", i=i+1, (*ptr).data);
        ptr = (*ptr).next;
    }
}
struct Node *insertionAtIndex(struct Node *frist, int data, int index) {
     struct Node *fourth;
     fourth = (struct Node *)malloc(sizeof(struct Node));
     struct Node *p = frist;
     int i = 0;
     while(i != index-1) {
         p = (*p).next;
         i++;
     }
     (*fourth).data = data;
     (*fourth).next = (*p).next;
     (*p).next = fourth;
     return frist;
     
}
int main() {
  struct Node *frist;
  struct Node *second;
  struct Node *third;
  struct Node *fifth;
  struct Node *sixth;

  frist = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fifth = (struct Node *)malloc(sizeof(struct Node));
  sixth = (struct Node *)malloc(sizeof(struct Node));

  (*frist).data = 10;
  (*frist).next = second;

  (*second).data = 20;
  (*second).next = third;

  (*third).data = 30;
  (*third).next = fifth;

  (*fifth).data = 50;
  (*fifth).next = sixth;

  (*sixth).data = 60;
  (*sixth).next = NULL;

  frist = insertionAtIndex(frist, 40, 4);
  travesal(frist);
return 0;
}