#include <stdio.h>
int alphabet(char);

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (alphabet(ch)) {
        printf("%c is an alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}
int alphabet(char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        return 1; 
    } else {
        return 0; 
    }
}