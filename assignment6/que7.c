#include <stdio.h>
#include <string.h>

#define MAX_ROMAN_LENGTH 20


void decimalToRoman(int num, char* roman) {

    const char *romanSymbols[] = {
        "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"
    };
    const int romanValues[] = {
        1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
    };


    roman[0] = '\0'; 


    for (int i = 0; i < 13; i++) {
        while (num >= romanValues[i]) {
            strcat(roman, romanSymbols[i]);
            num -= romanValues[i];
        }
    }
}


int romanToDecimal(const char* roman) {
    const char *romanSymbols = "MDCLXVI";
    const int romanValues[] = {
        1000, 500, 100, 50, 10, 5, 1
    };

    int value = 0;
    int prevValue = 0;


    for (int i = 0; roman[i] != '\0'; i++) {
        char ch = roman[i];
        int currentValue = 0;


        for (int j = 0; j < strlen(romanSymbols); j++) {
            if (ch == romanSymbols[j]) {
                currentValue = romanValues[j];
                break;
            }
        }


        if (currentValue > prevValue) {
            value += currentValue - 2 * prevValue;
        } else {
            value += currentValue;
        }

        prevValue = currentValue;
    }

    return value;
}


int main() {
    char roman[MAX_ROMAN_LENGTH];


    int number = 1987;
    decimalToRoman(number, roman);
    printf("Decimal %d to Roman: %s\n", number, roman);


    const char *romanNumeral = "MCMLXXXVII";
    int decimalValue = romanToDecimal(romanNumeral);
    printf("Roman %s to Decimal: %d\n", romanNumeral, decimalValue);

    return 0;
}
