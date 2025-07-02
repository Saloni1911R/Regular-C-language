#include<stdio.h>
int main() {
    float n = 10;
    float sum = 0.0;
    for(int i = 1;i<= 5;i++) {
        n*=10;
        printf("%f",i/n);
        sum += i/n;
        printf("\n");
        printf("%f",sum);
    }
}