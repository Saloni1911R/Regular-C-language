#include<stdio.h>

int main () {
    int x[2][3];
    for(int i = 0; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("Enter number = ");
            scanf("%d",&x[i][j]);
        }
    }
        for(int i = 0; i < 2 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            printf("%d \t",x[i][j]);
        }
        printf("\n");
    }
    
}