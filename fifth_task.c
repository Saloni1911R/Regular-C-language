//5. Write a C program to convert a Roman numeral to its decimal Equivalent.
#include <stdio.h>
#include <string.h>
int romanToDecimal(char roman) {
    switch(roman) {
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
int convertRomanToDecimal(char roman[], int length) {
    int total = 0;
    int i;
    for (i = 0; i < length; i++) {
        int value1 = romanToDecimal(roman[i]);
        if (i + 1 < length) {
            int value2 = romanToDecimal(roman[i + 1]);
            if (value1 >= value2) {
                total += value1;
            } else {
                total += value2 - value1;
                i++;
            }
        } else {
            total += value1;
        }
    }
    return total;
}
int main() {
    char roman[20];
    int length;
    
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    
    length = strlen(roman);
    
    int result = convertRomanToDecimal(roman, length);
    printf("The decimal equivalent of %s is %d\n", roman, result);

    return 0;
}
