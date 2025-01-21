// 2.Write a program that calculates an employee's salary:
// The base salary is provided.
// A performance evaluation score is input (from 1 to 5).
// The program calculates the bonus based on the score:
// 1 or 2: 5% bonus
// 3: 10% bonus
// 4: 15% bonus
// 5: 20% bonus
// The final salary is the base salary plus the bonus.

#include<stdio.h>

int main () {
    float salary ;
    int points;
    printf("Enter the salary : ");
    scanf("%f",&salary);
    printf("Enter the points from (1-5) : ");
    scanf("%d", &points);
    if (points == 1 || points == 2) {
        printf("Employee's salary: %f \n",salary + (salary * 0.05));
    }
    else if (points == 3) {
        printf("Employee's salary: %f \n",salary + (salary * 0.10));
    }
    else if (points == 4) {
        printf("Employee's salary: %f \n",salary + (salary * 0.15));
    }
    else if (points == 5) {
        printf("Employee's salary: %f \n",salary + (salary * 0.20));
    }
    else {
        printf("Something wrong!!");
    }
    return 0;
}