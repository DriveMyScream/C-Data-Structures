#include <stdio.h>
void print(int *arr, int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int *arr, int n) {
    int isSorted = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
               isSorted = 1;
            }
        }
    }

    if(isSorted) {
        printf("The Array is Not Already Sorted \n");
    } else {
        printf("The Array is Sorted\n");
    }
}
int main() {
    // int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(arr)/sizeof(int);
    print(arr, n);
    bubbleSort(arr, n);
    print(arr, n);
return 0;
}