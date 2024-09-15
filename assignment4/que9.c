#include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) 
{
    if (num <= 1) return false; 
    if (num == 2) return true; 
    if (num % 2 == 0) return false; 

    
    for (int i = 3; i * i <= num; i += 2) 
	{
        if (num % i == 0) return false; 
    }

    return true; 
}


void printPrimesInRange(int start, int end) 
{
    if (start > end) 
	{
        printf("Invalid range. Start should be less than or equal to end.\n");
        return;
    }

    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i); 
        }
    }
    printf("\n"); 
}

int main() 
{
    int start, end;


    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);


    printPrimesInRange(start, end);

    return 0;
}

