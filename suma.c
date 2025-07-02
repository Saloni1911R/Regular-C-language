// #include<stdio.h>

// int main () {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int i = 1;
//     do {
//         printf("%d",i);
//         i++;
//     }while(i<=n);
//     printf("\n");
//     return 0;
// }
#include <stdio.h>

int main() {
    int num = 1;

    // Print the sequence 1, 2, 4, 8, 16, 32, 64 using a do-while loop
    printf("The sequence is: ");
    do {
        printf("%d ", num);
        num *= 2;
    } while (num <= 64);

    printf("\n");
    return 0;
}
