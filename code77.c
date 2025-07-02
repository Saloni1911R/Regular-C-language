#include<stdio.h>
int main() {
    int n ;
    printf("Enter number: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("X%d/%d%d + ",i,i,i);
    }
    return 0;
}