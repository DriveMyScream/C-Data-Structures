#include <stdio.h>
int search(int arr[], int value, int uSize) {
    for(int i=0; i<uSize; i++) {
       if(arr[i] == value) {
           return i;
       } 
    }
    return -1;
}
int main() {
     int arr [10] = {10, 20, 30, 40, 50};
     int total_Size = sizeof(arr)/sizeof(int);
     int used_Size = 5;
     int value = 50;
     int result = search(arr, value, used_Size);
     printf("The Given Element %d is Present at index %d", value, result);
return 0;
}