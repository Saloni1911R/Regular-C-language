#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if (marks >= 90){
        printf("Grade A");
}
    else if (marks >= 75 && marks < 90){
        printf("Grade B");
}
    else if (marks >= 50 && marks < 75){
        printf("Grade C");
}
    else{
        printf("Grade F");
}
    return 0;
}
