#include <stdio.h>
#include <stdbool.h>


bool isCharInString(const char *str, char ch) {
    while (*str) {
        if (*str == ch) {
            return true;
        }
        str++;
    }
    return false;
}


void removeChars(char *string2, const char *string1) {
    char *src = string2;  
    char *dst = string2; 

    while (*src != '\0') {
        
        if (!isCharInString(string1, *src)) {
            *dst = *src;
            dst++;
        }
        src++;
    }
    *dst = '\0';  
}


int main() {
    char string2[100] = "Hello, World!";
    const char *string1 = "oW";

    printf("Original string2: '%s'\n", string2);

    removeChars(string2, string1);

    printf("String2 after removing characters in string1: '%s'\n", string2);

    return 0;
}
