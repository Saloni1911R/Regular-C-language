#include<stdio.h>

int main () {
    float a , b , c , d , e , sum ;
    float percentage;
    printf("Enter marks of PHYSICSa (0-100) : ");
    scanf("%f",&a);
    printf("Enter marks of CHEMISTRY (0-100) : ");
    scanf("%f",&b);
    printf("Enter marks of BIOLOGY (0-100) : ");
    scanf("%f",&c);
    printf("Enter marks of MATHS (0-100) : ");
    scanf("%f",&d);
    printf("Enter marks of COMPUTER (0-100) : ");
    scanf("%f",&e);
    sum = a + b + c + d + e;
    percentage = (sum / 500) * 100;
    printf("percentage = %f \n",percentage);
    if (percentage >= 90) {
        printf("Gread A");
    }
    else if (percentage >= 80) {
        printf("Gread B");
    }
    else if (percentage >= 70) {
        printf("Gread C");
    }
    else if (percentage >= 60) {
        printf("Gread D");
    }
    else if (percentage >= 50) {
        printf("Gread E");
    }
    else if (percentage < 40) {
        printf("Gread F");
    }
    else{
        printf("WORNG MARKS!");
    }
    return 0;
}