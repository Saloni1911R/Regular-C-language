#include <stdio.h>
int main() {
    int i = 1, j = 10;
    while (i < j) {
        printf("%d %d", i, j);
        i++;
        j--;
    }
    if (i == j) {
        printf("%d", i);
    }
    return 0;
}