#include <stdio.h>
void print(int *a, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int partition(int *a, int low, int high) {
    int pivot = a[low];
    int i = low+1;
    int j = high;
    int temp;
    do {
        while(a[i] <= pivot) {
            i++;
        }
        while(a[j] > pivot) {
            j--;
        }
        if(i<j) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while(i<j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quickSort(int *a, int low, int high) {
    int partitionIndex;
    if(low<high) {
        partitionIndex = partition(a, low, high);
        quickSort(a, low, partitionIndex-1);
        quickSort(a, partitionIndex+1, high);
    }
}
int main() {
   int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
   int n = sizeof(arr)/sizeof(int);
   print(arr, n);
   quickSort(arr, 0, n-1);
   print(arr, n);
return 0;
}