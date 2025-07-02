// 3.    The total distance traveled by vehicle in ͚t seconds is given by distance 
//s = ut+1/2at? where ͚u u and ͚a͛ are the initial velocity (m/sec.) and acceleration(m/sec?).
// Write a C program to find the distance traveled at regular intervals of time given the values 
//of ͚u and ͚ aThe program should provide the flexibility to the user to select his own time intervals and 
//repeat the calculations for different values of ͚u and a


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
        float s = (u * i)+ (0.5 * a * i );
        printf("At time %.2f, distance traveled: %.2f\n", i, s);
    }
    return 0;
}
