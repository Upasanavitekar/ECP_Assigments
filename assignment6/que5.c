#include <stdio.h>
#include <ctype.h>  


int atoi(const char* string) {
    int result = 0;   
    int sign = 1;    
    int i = 0;           


    while (isspace(string[i])) {
        i++;
    }


    if (string[i] == '-') {
        sign = -1;
        i++;
    } else if (string[i] == '+') {
        i++;
    }


    while (string[i] != '\0') {
        if (!isdigit(string[i])) {

            return 0;
        }
        result = result * 10 + (string[i] - '0');
        i++;
    }

    return sign * result;
}


int main() {
    const char *str1 = "   -12345";
    const char *str2 = "98765";
    const char *str3 = "42abc"; 

    printf("The integer value of '%s' is %d\n", str1, atoi(str1));
    printf("The integer value of '%s' is %d\n", str2, atoi(str2));
    printf("The integer value of '%s' is %d\n", str3, atoi(str3));

    return 0;
}
