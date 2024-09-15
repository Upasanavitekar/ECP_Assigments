#include <stdio.h>


int getNextFibonacci() 
{
    static int a = 0; 
    static int b = 1; 
    int next = a;      

    
    a = b;
    b = next + b;    

    return next;      
}

int main() 
{
    int terms;

 
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &terms);

   
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) 
	{
        printf("%d ", getNextFibonacci()); 
    }
    printf("\n");

    return 0;
}

