#include<stdio.h>

int main() {
    char x[10];
    char ch;
    int  count = 0;
    printf("Enter the string:");
    fgets(x,10,stdin);

    printf("Enter a character whose frequency is to be determined: ");
    scanf("%c",&ch);

    for (int i = 0; x[i] != '\0'; i++) {
        if (x[i] == ch) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}