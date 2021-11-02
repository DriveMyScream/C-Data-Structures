#include <stdio.h>
void display(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
        printf("\n");
}
void deletion(int arr[], int size, int index, int capacity) {
       for(int i=index; i<size-1; i++) {
           arr[i] = arr[i+1];
       }
    }
int main() {
      int arr[10] = {1, 2, 3, 4, 5};
      int size = 5;
      int index = 3;
      int capacity = 10;
      display(arr, size);
      deletion(arr, size, index, capacity);
      size = size - 1;
      display(arr, size);
return 0;
}