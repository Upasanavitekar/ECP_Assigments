#include <stdio.h>


int power(int base, int exponent) 
{
    int result = 1;  
    
    for (int i = 1; i <= exponent; i++) 
	{
        result = result * base; 
    }

    return result;  
}

int main() 
{
    int base, exponent;

    
    printf("Enter the base number: ");
    scanf("%d", &base);

    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    
    int result = power(base, exponent);

    
    printf("%d to the power of %d is: %d\n", base, exponent, result);

    return 0;  
}

