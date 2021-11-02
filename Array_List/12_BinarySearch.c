#include <stdio.h>

int binarySearch(int arr[], int size, int element) {
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high) {
    mid = (low + high)/2;
       if(arr[mid]==element) {
           return mid;
       } 
       if(arr[mid]<element) {
           low = mid+1;
       } else {
           high = mid-1;
       }
    }
        return -1;
}
int main() {
     int arr[] = {5, 10, 15, 20, 25, 30};
     int size = sizeof(arr)/sizeof(int);
     int element = 25;
     int result = binarySearch(arr, size, element);
     printf("The Element %d is presrnt at index %d", element, result);
return 0;
}