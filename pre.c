#include <stdio.h>
#include <math.h>

int main() {
    int n , on , re = 0, reminder;
    printf("Enter number : ");
    scanf("%d",&n);
    on = n;
    for (int i = 0; n != 0 ; i++) {
        reminder = n % 10;
        re += reminder * reminder * reminder ; 
        n /= 10; 
    }
    if (re == on) {
        printf("armstrong");
    }
    else {
        printf("Not armstrong");
    }
    return 0;
} 