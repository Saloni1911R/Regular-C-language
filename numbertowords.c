#include <stdio.h>

int main() {
    int num, digit, reverse = 0;

    // Array to store words for digits
    const char *words[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        printf("Minus ");
        num = -num;
    }

    // Reverse the number to handle digits from left to right
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }

    // Print digits in words
    while (reverse != 0) {
        digit = reverse % 10;
        printf("%s ", words[digit]);
        reverse /= 10;
    }

    printf("\n");
    return 0;
}
