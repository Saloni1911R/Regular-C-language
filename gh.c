#include <stdio.h>
#include <string.h>

void findTwosComplement(char bin[]) {
    int n = strlen(bin), flag = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (flag) 
            bin[i] = (bin[i] == '1') ? '0' : '1';
        if (bin[i] == '1' && flag == 0) 
            flag = 1;
    }
    printf("2's Complement: %s\n", bin);
}

int main() {
    char bin[100];
    printf("Enter a binary number: ");
    scanf("%s", bin);
    findTwosComplement(bin);
    return 0;
}
