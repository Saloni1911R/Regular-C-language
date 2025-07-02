#include <stdio.h>
int dmy(int , int , int);
int main() {
    int day , year , week;
    printf("Enter the number of days: ");
    scanf("%d", &day);
    dmy(year ,week , day);
    return 0;
}
int dmy(int year , int week , int day) {
 year = day / 365;
    week = (day % 365) / 7;
    day = day % 7;
    return year , day ,week;
}
//printf("%d days is equal to %d years, %d weeks, and %d days.\n", days, years, weeks, days);