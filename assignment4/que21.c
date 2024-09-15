#include <stdio.h>
#include <math.h>

int main() 
{
    double number, result;


    printf("Enter a number to find its square root: ");
    scanf("%lf", &number);


    result = sqrt(number);


    printf("Square root of %.2lf is %.2lf\n", number, result);

    return 0;
}

