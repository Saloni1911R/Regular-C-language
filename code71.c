#include<stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("X%d/Y%d + ",i,i);
    }
    return 0;
}