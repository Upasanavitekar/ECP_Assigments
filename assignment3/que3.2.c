#include <stdio.h>

int main() 
{
    int num, reverse = 0, digit, originalNum;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 


    while (num > 0) 
	{
        digit = num % 10; 
        reverse = reverse * 10 + digit; 
        num /= 10;                     
    }


    if (originalNum == reverse) 
	{
        printf("%d is a numeric palindrome.\n", originalNum);
    } 
	else 
	{
        printf("%d is not a numeric palindrome.\n", originalNum);
    }

    return 0;
}

