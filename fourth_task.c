//4.2's complement of a number is obtained by scanning it from right to left 
//and complementing all the bits after the first appearance of a 
//1. Thus 2͛s complement of 11100 is 00100.
// Write a C program to find the 2's complement of a nary number.

#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    printf("Enter a binary number: ");
    scanf("%s", n);

    int c = strlen(n), a = 0;
    for (int i = c - 1; i >= 0; i--) {
        if (a) {
            if (n[i] == '1') {
                n[i] = '0';
            } else {
                n[i] = '1';
            }
        }
        if (n[i] == '1' && a == 0) {
            a = 1;
        }
    }
    printf("2's Complement: %s\n", n);
    return 0;
}

