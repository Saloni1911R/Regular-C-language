#include <stdio.h>
int leapyear(int);

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (leapyear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

int leapyear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}
