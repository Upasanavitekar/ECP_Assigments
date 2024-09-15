#include <stdio.h>

int main() 
{
    int num, originalNum;
    int divisor = 2;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num; 

   
    printf("%d = ", originalNum);

    
    while (num > 1) {
        if (num % divisor == 0) 
		{
            printf("%d", divisor);
            num /= divisor;

            if (num > 1) 
			{
                printf(" * ");
            }
        } 
		else 
		{
            divisor++;
        }
    }

    printf("\n");
    return 0;
}

