#include <stdio.h>
#include <string.h>

// Function to reverse a word
void reverse(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
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

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character if it exists
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Output: %s\n", str);
    return 0;
}
