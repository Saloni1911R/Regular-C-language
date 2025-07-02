#include<stdio.h>

int main () {
    int n; 
    printf("Enter the month number (1-12) : ");
    scanf("%d",&n);
    switch (n)
    {
    case 1: printf("JANUARY : 31 DAYS");
        break;
    case 2: printf("FEBRUARY : 28 / 29 DAYS");
        break;
    case 3: printf("MARCH : 31 DAYS");
        break;
    case 4: printf("APRIL : 30 DAYS");
        break;
    case 5: printf("MAY : 31 DAYS");
        break;
    case 6: printf("JUNE : 30 DAYS");
        break;
    case 7: printf("JULY : 31 DAYS");
        break;
    case 8: printf("AUGUST: 31 DAYS");
        break;
    case 9: printf("SUPTEMBER : 31 DAYS");
        break;
    case 10: printf("OCTMBER : 31 DAYS");
        break;
    case 11: printf("NOVEMBER : 30 DAYS");
        break;
    case 12: printf("DECEMBER : 31 DAYS");
        break;
    default: printf("WRONG NUMBER!!");
        break;
    }
    return 0;
}