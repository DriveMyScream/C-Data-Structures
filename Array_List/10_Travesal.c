#include <stdio.h>

void display(int arr[], int n) {
    for(int i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    display(arr, 4);
return 0;
}