#include <stdio.h>

int main () {
    int x[50] , n , sum = 0;
    printf("How many numbers you want to add up to 50: ");
    scanf("%d",&n);
    for(int i = 0 ; i <= n ; i++) {
    printf("Enter elements : ");
    scanf("%d",&x[i]);
}
for (int i = 0 ; i <= n; i++) {
    if (x[i] % 2 == 0) {
        sum += x[i];
    }
}
printf("Sum of even numbers = %d",sum);
return 0;
}
