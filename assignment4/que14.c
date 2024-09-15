#include <stdio.h>


int fibonacci(int n) 
{

    if (n == 0) 
	{
        return 0;
    } 
	else if (n == 1) 
	{
        return 1;
    } 
	else 
	{

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}


void printFibonacciSeries(int terms) 
{

    for (int i = 0; i < terms; i++) 
	{

        printf("%d ", fibonacci(i));
    }

    printf("\n");
}

int main() 
{
    int numTerms;


    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &numTerms);


    if (numTerms < 0) 
	{

        printf("Number of terms cannot be negative.\n");
    } 
	else 
	{

        printFibonacciSeries(numTerms);
    }

    return 0;
}

