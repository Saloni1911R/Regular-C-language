#include<stdio.h>
#include<math.h>

void hello(float n);

int main () {
    float n;
    printf("Enter number : ");
    scanf("%f",&n);
    hello(n);
}
void hello(float n) {
    printf("%f",pow(n,2));
}