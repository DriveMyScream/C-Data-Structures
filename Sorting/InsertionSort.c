#include <stdio.h>
void print(int *a, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionSort(int *a, int size) {
    int min, j;
    for(int i=1; i<=size-1; i++) {
        min = a[i];
        j = i-1;
     while(j>=0 && a[j] > min) {
         a[j+1] = a[j];
         j--;
     }
     a[j+1] = min;
    }
}
int main() {
   int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
   int n = sizeof(arr)/sizeof(int);
   print(arr, n);
   insertionSort(arr, n);
   print(arr, n);
return 0;
}