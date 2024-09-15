#include <stdio.h>


int factorial(int num) 
{
    int fact = 1;

    
    for (int i = 1; i <= num; i++) 
	{
        fact = fact * i; 
    }

    return fact;
}

int main() 
{
    int number, result;

  
    printf("Enter a number to find its factorial: ");
    scanf("%d", &number);

   
    result = factorial(number);

    
    printf("Factorial of %d is: %d\n", number, result);

    return 0;
}

