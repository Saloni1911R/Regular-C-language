#include <stdio.h>

int main() {
    int num1, num2, max;

    // Accept two numbers from the user
    printf("Enter two numbers to find their LCM: ");
    scanf("%d %d", &num1, &num2);

    // Ensure numbers are positive
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;

    // Start with the larger of the two numbers
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Find LCM using a while loop
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            printf("The LCM of the given numbers is: %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
