#include <stdio.h>
#include "maxarray.h"

int main() {
    int size;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);
    printf("The maximum value in the array is %d\n", max);
    return 0;
}
