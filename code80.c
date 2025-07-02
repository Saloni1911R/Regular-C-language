#include<stdio.h>

int main() {
    int sum = 0;
    int n ;
    int a;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i <= n; i++) {
        a = i+30;
        sum  = (sum+i);
        printf("%d ",sum*a);
    }
}