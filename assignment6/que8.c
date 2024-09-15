#include <stdio.h>
#include <string.h>


const char *one[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
const char *two[] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
const char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
const char *thousands[] = {"", "Thousand", "Million", "Billion"};


void convert_hundred(int num, char* str) {
    if (num > 99) {
        strcat(str, one[num / 100]);
        strcat(str, " Hundred ");
        num %= 100;
    }
    if (num > 19) {
        strcat(str, tens[num / 10]);
        strcat(str, " ");
        num %= 10;
    }
    if (num > 9) {
        strcat(str, two[num - 10]);
    } else {
        strcat(str, one[num]);
    }
}


void number_to_words(int num, char* str) {
    if (num == 0) {
        strcat(str, "Zero");
        return;
    }

 
    int chunk_count = 0;
    char temp[256] = {0};  

    while (num > 0) {
        if (num % 1000 != 0) {
            convert_hundred(num % 1000, temp);
            strcat(temp, thousands[chunk_count]);
            strcat(temp, " ");
            strcat(temp, str);
            strcpy(str, temp);
            memset(temp, 0, sizeof(temp)); 
        }
        num /= 1000;
        chunk_count++;
    }
}


int main() {
    int number = 1234567890;  
    char str[256] = {0};

    number_to_words(number, str);

    printf("Number %d in words is: %s\n", number, str);

    return 0;
}
