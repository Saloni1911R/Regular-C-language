#include <stdio.h>

int main() {
    char x[100];
    int i, count = 0;

    printf("Enter a string: ");
    gets(x);

    for (i = 0; x[i] != '\0'; i++) {
        if (x[i] == ' ') {
            count++;
        }
    }

    printf("Number of white spaces: %d\n", count);

    return 0;
} 