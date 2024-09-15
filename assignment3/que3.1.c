#include <stdio.h>

int main() 
{
    int num, reverse = 0, digit;

 
    printf("Enter a number: ");
    scanf("%d", &num);

    int originalNum = num;

     while (num > 0) 
	{
        digit = num % 10; 
        reverse = reverse * 10 + digit;
	num /= 10; 
    }

     printf("The reverse of %d is %d\n", originalNum, reverse);

    return 0;
}

