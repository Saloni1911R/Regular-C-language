#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Duplicate numbers in the array are:\n");

    // Find duplicates
    int foundDuplicate = 0; // To track if any duplicates are found
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                foundDuplicate = 1;
                break; // Break inner loop after finding a duplicate to avoid duplicate outputs
            }
        }
    }

    // If no duplicates found
    if (!foundDuplicate) {
        printf("No duplicates found.\n");
    }

    return 0;
}