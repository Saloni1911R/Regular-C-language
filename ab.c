// Write a c program on Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) 
        temp[i] = arr[i];
    for (int i = d; i < n; i++) 
        arr[i - d] = arr[i];
    for (int i = 0; i < d; i++) 
        arr[n - d + i] = temp[i];
}

int main() {
    int n, d;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
    printf("Enter number of rotations: ");
    scanf("%d", &d);
    d %= n;
    rotateArray(arr, n, d);
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
    return 0;
}
