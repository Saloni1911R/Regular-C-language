#include<stdio.h>

int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i = 1; i<= n; i++) {
        if(i%3==0){
            continue;
        }
        printf("%d ",i);
        sum+= i;
    }
    printf("\n %d ",sum);
}