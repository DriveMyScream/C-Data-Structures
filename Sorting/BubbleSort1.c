#include <stdio.h>
void print(int *a, int size) {
    for(int i=0; i<size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void bubbleSort(int *arr, int size) {
    int isSorted = 1;
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSorted = 0;
            }
        }
    }
    if(isSorted) {
        printf("The Array is Alrady Sorted\n");
    } else {
        printf("The Array is Already is Not Sorted\n");
    }
}
int main() {
   int arr[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
   int size = sizeof(arr)/sizeof(int);
   print(arr, size);
   bubbleSort(arr, size);
   print(arr, size);

return 0;
}