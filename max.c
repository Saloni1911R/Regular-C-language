#include <stdio.h>

int max(int , int , int );

int main() {
    int n1, n2, n3, maxn;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    maxn = max(n1, n2, n3);

    printf("The maximum number is: %d\n", maxn);

    return 0;
}

int max(int n1, int n2, int n3) {
    int max = n1;

    if (n2 > max) {
        max = n2;
    }

    if (n3 > max) {
        max = n3;
    }

    return max;
}
