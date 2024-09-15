#include <stdio.h>


typedef enum 
{
    NO_ERROR = 0, 
    DIV_BY_ZERO = 1 
} ErrorCode;


ErrorCode calculate(double a, double b, char operator, double *result) 
{
    switch (operator) 
	{
        case '+': 
            *result = a + b;
            return NO_ERROR;
        case '-':
            *result = a - b;
            return NO_ERROR;
        case '*': 
            *result = a * b;
            return NO_ERROR;
        case '/':
            if (b == 0) 
			{ 
                return DIV_BY_ZERO;
            }
            *result = a / b;
            return NO_ERROR;
        default:
            return DIV_BY_ZERO;
    }
}

int main() 
{
    double num1, num2, result;
    char op;
    ErrorCode error;


    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op); 


    error = calculate(num1, num2, op, &result);


    if (error == NO_ERROR) 
	{
        printf("Result: %.2lf\n", result);
    } 
	else if (error == DIV_BY_ZERO) 
	{
        printf("Error: Division by zero is not allowed.\n");
    }

    return 0;
}
