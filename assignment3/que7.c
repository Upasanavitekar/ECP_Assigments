#include <stdio.h>

int main() 
{
    int num;

  
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Unique pairs of factors that multiply to %d:\n", num);


    for (int i = 1; i <= num / 2; i++) 
	{
        if (num % i == 0) 
		{
            int j = num / i; // The paired factor
            printf("%d * %d = %d\n", i, j, num);
        }
    }

    return 0;
}

