#include <stdio.h>

int main() 
{
    int num, originalNum, remainder, result = 0;

    // Ask the user to input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number to check later


    while (num > 0) 
	{
        remainder = num % 10;  
        result += remainder * remainder * remainder;
        num /= 10;                      
    }


    if (result == originalNum) 
	{
        printf("%d is an Armstrong number.\n", originalNum);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}

