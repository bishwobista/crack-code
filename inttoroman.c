#include <stdio.h>

// Function to convert an integer to a Roman numeral
void intToRoman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char* numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    if (num <= 0 || num >= 4000) {
        printf("Invalid input. Roman numerals are only defined for values between 1 and 3999.\n");
        return;
    }

    printf("Roman numeral for %d is: ", num);

    for (int i = 0; num > 0; i++) {
        while (num >= values[i]) {
            printf("%s", numerals[i]);
            num -= values[i];
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    intToRoman(num);

    return 0;
}
