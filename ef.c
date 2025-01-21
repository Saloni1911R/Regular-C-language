#include <stdio.h>

int main() {
    float u, a, t, interval;
    printf("Enter initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter acceleration (a): ");
    scanf("%f", &a);
    printf("Enter total time (t): ");
    scanf("%f", &t);
    printf("Enter time interval: ");
    scanf("%f", &interval);

    for (float i = 0; i <= t; i += interval) {
        float s = u * i + 0.5 * a * i * i;
        printf("At time %.2f, distance traveled: %.2f\n", i, s);
    }
    return 0;
}
