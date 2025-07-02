#include<stdio.h>
int main(){
    int sum = 1;
    printf("%d ",sum);
    for(int i = 10; i >= 1; i--) {
        sum +=i;
        printf("%d ",sum);
    }
}