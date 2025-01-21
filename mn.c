#include <stdio.h>

int main() {
    float baseSalary, bonus, finalSalary;
    int score;
    
    printf("Enter base salary: ");
    scanf("%f", &baseSalary);
    
    printf("Enter performance evaluation score (1 to 5): ");
    scanf("%d", &score);
    
    if (score == 1 || score == 2)
        bonus = baseSalary * 0.05;
    else if (score == 3)
        bonus = baseSalary * 0.10;
    else if (score == 4)
        bonus = baseSalary * 0.15;
    else if (score == 5)
        bonus = baseSalary * 0.20;
    else
        bonus = 0; // Invalid score

    finalSalary = baseSalary + bonus;
    
    printf("The final salary is: %.2f\n", finalSalary);
    return 0;
}
