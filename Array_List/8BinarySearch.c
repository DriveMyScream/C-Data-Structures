#include <stdio.h>

int search(int arr[], int size, int element) {
    int low, mid, high;
    
    low = 0;
    high = size-1;
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
   int arr [10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
   int size = sizeof(arr)/sizeof(int);
   int element = 80;
   int result = search(arr, size, element);
   printf("The Element %d is Present at index %d", element, result);
return 0;
}