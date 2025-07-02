#include<stdio.h>

int main () {
    int a[5] = {2,3,5,7,9};
    printf("Enter the number : ");
    scanf("%d",&a[2]);
    for(int i = 0 ; i <= 4 ; i++) {
        printf("%d \n",a[i]);
    }
    return 0;
}