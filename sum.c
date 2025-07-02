#include<stdio.h>
int main () {
    int sum = 0;
    int a[5];
    for(int i = 0 ; i < 5 ; i++) {
        printf("Enter number = ");
        scanf("%d",&a[i]);
    }
    for (int i = 0 ; i < 5; i++) {
        sum += a[i];
    }
    printf("Sum = %d",sum);
    return 0;
}