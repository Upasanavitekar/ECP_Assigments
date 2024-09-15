#include <stdio.h>


float calculator(float operand1, float operand2, char operator) 
{
    float result;

    
    if (operator == '+') 
	{
        result = operand1 + operand2;  
    } 
	else if (operator == '-') 
	{
        result = operand1 - operand2;  
    } 
	else if (operator == '*') 
	{
        result = operand1 * operand2; 
    } 
	else if (operator == '/') 
	{
        if (operand2 != 0) 
		{  
            result = operand1 / operand2;  
        } 
		else 
		{
            printf("Error: Division by zero is not allowed.\n");
            return 0; 
        }
    } 
	else 
	{
        printf("Error: Invalid operator.\n");
        return 0;  
    }

    return result;
}

int main() 
{
    float num1, num2, result;
    char operator;

  
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator); 

    printf("Enter the second number: ");
    scanf("%f", &num2);

  
    result = calculator(num1, num2, operator);

    
    if (result != 0 || (operator == '/' && num2 == 0)) {
        printf("The result of %.2f %c %.2f is: %.2f\n", num1, operator, num2, result);
    }

    return 0;
}

