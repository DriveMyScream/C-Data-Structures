#include <stdio.h>
void print(int *a, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selectionSort(int *a, int size) {
    int minIndex;
    for(int i=0; i<size-1; i++) {
       minIndex = i;
    for(int j=i+1; j<size; j++) {
        if(a[j] < a[minIndex]) {
            minIndex = j;
        }
    }
    int temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
    }
}
int main() {
   int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
   int size = sizeof(arr)/sizeof(int);
   print(arr, size);
   selectionSort(arr, size);
   print(arr, size);
return 0;
}