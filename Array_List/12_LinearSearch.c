#include <stdio.h>

int linear(int arr[], int size, int element) {
    for(int i=0; i<size; i++) {
        if(arr[i]==element) {
            return element;
        }
    }
            return -1;
}
int main() {
    int arr [10] = {5, 10, 15, 20, 25};
    int capacity = sizeof(arr)/ sizeof(int);
    int size = 5;
    int element = 20;
    int result = linear(arr, size, element);
    printf("%d ", result);
return 0;
}