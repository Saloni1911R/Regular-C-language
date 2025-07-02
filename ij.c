#include <stdio.h>
#include <string.h>

int romanToDecimal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return -1;
    }
}

int main() {
    char roman[100];
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    int n = strlen(roman), result = 0;

    for (int i = 0; i < n; i++) {
        int curr = romanToDecimal(roman[i]);
        int next = romanToDecimal(roman[i + 1]);
        if (curr < next) 
            result -= curr;
        else 
            result += curr;
    }
    printf("Decimal equivalent: %d\n", result);
    return 0;
}
