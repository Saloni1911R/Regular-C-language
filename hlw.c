#include<stdio.h>

int main () {
    int x[2][2][2];
    for(int i = 0; i < 2 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            for (int k = 0 ; k < 2 ; k++) {
                printf("Enter [%d][%d][%d] = ",i,j,k);
                scanf("%d",&x[i][j][k]);
            }
        }
    }
    for(int i = 0; i < 2 ; i++) {
        for (int j = 0; j < 2 ; j++) {
            for (int k = 0 ; k < 2 ; k++) {
                printf("%d \t",x[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}