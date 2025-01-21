// Write a c program on Given an unsorted array arr[] of size N. Rotate the array to the left (counter-clockwise direction) by D steps, where D is a positive integer. 

#include <stdio.h>

int main () {
    int n ;
    printf("Enter the size: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n ; i++) {
        printf("Enter arr[%d] : ", i);
        scanf("%d",&arr[i]);
    }
    int d;
    printf("Enter rotations : ");
    scanf("%d",&d);
    d %= n;
    int x[d];
    for (int i = 0; i < d; i++) {
        x[i] = arr[i];
    }
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = x[i];
    }
     printf("Rotated array: \n");
    for (int i = 0; i < n ; i++) {
        //printf("%d ", arr[i]);
        printf(" %d \n", arr[i]);
    }
    return 0;
}
