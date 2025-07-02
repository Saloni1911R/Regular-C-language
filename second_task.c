//2.    Write a c Program on given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. 
//The task is to find the element that would be at the k͛th position of the final sorted array.Explanation:
// Input : Array 1 - 1 4 2 3 5 
// Array 2 - 7 8 6 
// k = 5 
// Output : 6
// Because The final sorted array would be -1, 2, 3, 4, 5, 6, 7, 8, The 5th element of this array is 6.


#include <stdio.h>

int main() {
    int n, m, k;

    // Input sizes of both arrays
    printf("Enter the size of arr1: ");
    scanf("%d", &n);
    printf("Enter the size of arr2: ");
    scanf("%d", &m);
    int arr1[n], arr2[m];
    for (int i = 0; i < n; i++) {
        printf("Enter arr1[%d] : \n", i);
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < m; i++) {
        printf("Enter arr2[%d]: ",i);
        scanf("%d", &arr2[i]);
    }
    printf("Enter the value of k: ");
    scanf("%d", &k);
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr1[i] > arr1[j]) {
                int a = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = a;
            }
        }
    }
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr2[i] > arr2[j]) {
                int a = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = a;
            }
        }
    }
    int i = 0, j = 0, count = 0, result = 0;
    while (count < k) {
        if (i < n && (j >= m || arr1[i] <= arr2[j])) {
            result = arr1[i];
            i++;
        } else {
            result = arr2[j];
            j++;
        }
        count++;
    }

    printf("The %dth element is: %d\n", k, result);
    return 0;
}
