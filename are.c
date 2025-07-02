#include<stdio.h>

int main () {
    int a[6];
    for (int i = 0 ; i <= 5 ; i++) {
        printf("Enter Number : ");
        scanf("%d",&a[i]);
    }
    int n , k;
    printf("Enter the array which you want to change : ");
    scanf("%d",&n);
    printf("you want to change this number = %d \n",a[n]);
    printf("Enter new number : ");
    scanf("%d",&a[n]);
    printf("Your series of numbers is :- \n");
    for (int i = 0 ; i <= 5 ; i++) {
        printf("%d \n",a[i]);
    }
    return 0;
}

//5x4 array 