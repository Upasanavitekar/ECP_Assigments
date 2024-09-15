#include <stdio.h>


void printFibonacci(int n) 
{
    int a = 0, b = 1, next;

    
    for (int i = 0; i < n; i++) 
	{
        if (i == 0) 
		{
            printf("%d ", a); 
        } 
		else if (i == 1) 
		{
            printf("%d ", b);  
        } 
		else 
		{
            next = a + b;    
            a = b;            
            b = next;        
            printf("%d ", next);  
        }
    }
    printf("\n"); 
}

int main() 
{
    int terms;


    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);


    printFibonacci(terms);

    return 0;
}

