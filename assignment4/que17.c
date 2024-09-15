#include <stdio.h>


int sum;
int product;


void calculateSumAndProduct(int a, int b) 
{
    sum = a + b;
    product = a * b;  
}

int main() 
{
    int num1, num2;


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    calculateSumAndProduct(num1, num2);


    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
