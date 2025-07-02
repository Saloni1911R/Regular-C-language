#include <stdio.h>

int main(){
int n;
printf("Enter number: ");
scanf("%d",&n);
for(int i = 1; i<=n; i++) {
    if(i % 2 == 0) {
       printf("%d : I'm Sorry \n",i); 
    }
    else {
        printf("%d : I'm Sooooooorrrrrrrryyyyyyy PANDA \n",i); 
    }
    
}
}