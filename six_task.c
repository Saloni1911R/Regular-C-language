// 1.Write C code to enter text in line and reverse each word individually
// e.g. 
// input :
// Hello How are you
// Ouput
// olleH woH era uoy

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end);
void reverseWords(char str[]);

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Output: %s\n", str);
    return 0;
}

void reverseWords(char str[]) {
    int word_begin = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i + 1] == '\0') {
            int word_end = (str[i + 1] == '\0') ? i : i - 1;
            reverse(str, word_begin, word_end);
            word_begin = i + 1;
        }
        i++;
    }
}

void reverse(char str[], int start, int end) {
    char a;
    while (start < end) {
        a = str[start];
        str[start] = str[end];
        str[end] = a;
        start++;
        end--;
    }
}
