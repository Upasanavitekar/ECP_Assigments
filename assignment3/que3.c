#include <stdio.h>

int main() 
{
    int num, sum = 0, digit;


    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num; 


    while (num > 0) 
	{
        digit = num % 10; 
	sum += digit;      
        num /= 10;         
    }


    printf("The sum of digits of %d is %d\n", originalNum, sum);

    return 0;
}

