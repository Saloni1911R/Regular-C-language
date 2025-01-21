#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0;

    // Accept a number from the user
    printf("Enter a number to check if it is an Armstrong number: ");
    scanf("%d", &num);

    originalNum = num;

    // Find the number of digits in the number
    int n = 0;
    int temp = num;
    do {
        temp /= 10;
        n++;
    } while (temp != 0);

    // Check if the number is an Armstrong number
    do {
        remainder = num % 10;
        result += pow(remainder, n);
        num /= 10;
    } while (num != 0);

    // Print the result
    if (result == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
