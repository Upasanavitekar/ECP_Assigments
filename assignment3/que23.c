#include <stdio.h>


int factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
	{
        fact *= i;
    }
    return fact;
}


int binomialCoefficient(int n, int r) 
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}


void printPascalsTriangle(int rows) 
{
    for (int i = 0; i < rows; i++) 
	{

        for (int j = 0; j < rows - i - 1; j++) 
		{
            printf("   ");
        }

        for (int j = 0; j <= i; j++) 
		{
            printf("%4d", binomialCoefficient(i, j));
        }
        printf("\n");
    }
}

int main() 
{
    int numRows;


    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);


    printPascalsTriangle(numRows);

    return 0;
}

