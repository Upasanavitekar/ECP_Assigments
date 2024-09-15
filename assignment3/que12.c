#include <stdio.h>

int main() 
{
    int base, index, result = 1;

    
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the index (exponent): ");
    scanf("%d", &index);


    for (int i = 1; i <= index; i++) 
	{
        result *= base;
    }


    printf("%d^%d = %d\n", base, index, result);

    return 0;
}

