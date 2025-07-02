#include<stdio.h>
int main(){
    int sum = 0;
    int add;
    int n;
    scanf("%d",&n);
    for( ;n!=0;n/=10) {
        add = n%10;
        sum = sum*10+add;
    }
    printf("%d",sum);
}