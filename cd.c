#include <stdio.h>

void mergeSortedArrays(int arr1[], int n, int arr2[], int m, int k) {
    int merged[n + m], i = 0, j = 0, index = 0;

    while (i < n && j < m) 
        merged[index++] = (arr1[i] < arr2[j]) ? arr1[i++] : arr2[j++];
    
    while (i < n) 
        merged[index++] = arr1[i++];
    
    while (j < m) 
        merged[index++] = arr2[j++];
    
    printf("The %dth element is: %d\n", k, merged[k - 1]);
}

int main() {
    int n, m, k;
    printf("Enter size of first array: ");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter sorted elements of first array: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr1[i]);
    
    printf("Enter size of second array: ");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter sorted elements of second array: ");
    for (int i = 0; i < m; i++) 
        scanf("%d", &arr2[i]);
    
    printf("Enter the value of k: ");
    scanf("%d", &k);
    mergeSortedArrays(arr1, n, arr2, m, k);
    return 0;
}
