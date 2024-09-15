#include <stdio.h>

int error_flag = 0;


float calculator(float num1, float num2, char operator) 
{
    float result = 0;  
    
    if (operator == '+') {
        result = num1 + num2;  
    } 
	else if (operator == '-') 
	{
        result = num1 - num2;  
    } 
	else if (operator == '*') 
	{
        result = num1 * num2;  
    } 
	else if (operator == '/') 
	{
        if (num2 != 0) 
		{
            result = num1 / num2;  
        } 
		else 
		{
            error_flag = 1;  
        }
    } 
	else 
	{
        error_flag = 1; 
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

    
    if (error_flag == 1) 
	{
        printf("Error: Invalid operation (either division by zero or wrong operator).\n");
    } else {
        
        printf("The result of %.2f %c %.2f is: %.2f\n", num1, operator, num2, result);
    }

    return 0;
}
