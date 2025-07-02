#include<stdio.h>
#include<math.h>

int main() {
    float div = 1;
    float sum = 0.0;
float a[9] = {1,2,3,4,5,6,7,8,9};
float b[9] = {2,3,4,5,6,7,8,9,10};
for(int i= 0; i<9;i++){
    div = a[i]/b[i];
    printf("%f \n",div);
    sum += div;
    printf("%f",sum);
}
}