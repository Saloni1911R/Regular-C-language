// #include <stdio.h>

// int findMax(int arr[], int size) {
//     int max = arr[0]; // Assume first element is the max
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i]; // Update max if current element is greater
//         }
//     }
//     return max;
// }

// int main() {
//     int arr[] = {10, 20, 5, 15, 30}; // Example array
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int max = findMax(arr, size);
//     printf("The maximum value in the array is %d\n", max);
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 5, 15, 30}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, size);
    printf("The maximum value in the array is %d\n", max);
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return 0;
}

