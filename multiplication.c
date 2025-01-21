#include<stdio.h>

int main () {
   // int a , b , e , f;
    int x[2][2] , y[2][2] , z[2][2] = {0};
    printf("Enter first metrice\n");
    for(int a = 0; a < 2 ; a++) {
        for (int b = 0 ; b < 2 ; b++) {
            printf("Enter [%d][%d] = ",a,b);
            scanf("%d",&x[a][b]);
        }
    }
    printf("your matrice is : \n");
        for(int a = 0; a < 2 ; a++) {
        for (int b = 0 ; b < 2 ; b++) {
            printf("%d \t",x[a][b]);
        }
        printf("\n");
    }
    printf("Enter second metrice\n");
    for(int e = 0; e < 2 ; e++) {
        for (int f = 0 ; f < 2 ; f++) {
            printf("Enter [%d][%d] = ",e,f);
            scanf("%d",&y[e][f]);
        }
    }
    printf("your matrice is :\n");
        for(int e = 0; e < 2 ; e++) {
        for (int f = 0 ; f < 2 ; f++) {
            printf("%d \t",y[e][f]);
        }
        printf("\n");
    }
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            for (int c = 0; c <2 ; c++) {
            z[a][b] += x[a][c] * y[c][b];
            }
        }
    }
    printf("Sum of the two matrices:\n");
    for (int a = 0; a < 2; a++) {
        for (int b = 0; b < 2; b++) {
            printf("%d \t", z[a][b]);
        }
        printf("\n");
    }

    return 0;
}