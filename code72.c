#include<stdio.h>
int main() {
    int n ;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("X%d/Y%d + X%d/Y%d + ",i,i-1,i,i);
    }
    return 0;
}