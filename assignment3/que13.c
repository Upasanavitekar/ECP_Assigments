#include <stdio.h>

int main() 
{
    int n, first = 1, second = 1, next;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    if (n <= 0) 
	{
        printf("Number of terms should be a positive integer.\n");
        return 1;
    }

    
    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++) 
	{
        if (i == 1) 
		{
            printf("%d", first); 
		} else if (i == 2) 
		{
            printf(", %d", second);
        } 
		else 
		{
            next = first + second; 
            printf(", %d", next);
            first = second; 
            second = next; 
        }
    }
    printf("\n");

    return 0;
}

