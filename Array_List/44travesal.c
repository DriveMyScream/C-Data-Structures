#include <stdio.h>
void printData(int arr[], int size) {
    for(int i=0; i<size; i++) {
        printf("The Value of Element at index %d is %d\n", i, arr[i]);
    }
    printf("\n");
}
int main() {
   int marks [10] = {10, 20, 30, 40, 50};
   int capacity = sizeof(marks)/sizeof(int);
   int size = 5;
   printData(marks, size);
return 0;
}