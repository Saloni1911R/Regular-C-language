#include <stdio.h>

int main() {
    int num, i = 2;
    int isPrime = 1; // Assume the number is prime

    // Accept a number from the user
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    // Handle numbers less than 2
    if (num < 2) { 
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check for factors using a do-while loop
    do {
        if (num % i == 0) {
            isPrime = 0; // Number is not prime
            break;
        }
        i++;
    } while (i <= num / 2);

    // Print the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
