#include <stdio.h>


void calculateSumAndProduct(int a, int b, int *sumResult, int *productResult) 
{
    *sumResult = a + b;     
    *productResult = a * b;     
}

int main() 
{
    int num1, num2;
    int sum, product;


    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);


    calculateSumAndProduct(num1, num2, &sum, &product);


    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}
