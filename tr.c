#include <stdio.h>
int triangle(int , int , int) ;

int main() {
    int a1, a2, a3;

    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (triangle(a1, a2, a3)) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}

int triangle(int a1, int a2, int a3) {
    if (a1 + a2 + a3 == 180) {
        return 1; 
    } else {
        return 0; 
    }
}
