#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Accept two numbers from the user
    printf("Enter two numbers to find their HCF: ");
    scanf("%d %d", &num1, &num2);

    // Ensure numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Apply the Euclidean algorithm to find HCF
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // The value of num1 at this point is the HCF
    printf("The HCF of the given numbers is: %d\n", num1);

    return 0;
}
