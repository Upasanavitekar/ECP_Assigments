#include <stdio.h>

int main() 
{
    int num1, num2, temp;

 
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

  
    int originalNum1 = num1;
    int originalNum2 = num2;

   
    printf("Finding GCD of %d and %d:\n", originalNum1, originalNum2);

    
    while (num2 != 0) 
	{
        temp = num2;
        num2 = num1 % num2; 
        num1 = temp;


        if (num2 != 0) 
		{
            printf("%d %% %d = %d\n", num1, temp, num2);
        }
    }


    printf("GCD of %d and %d is %d\n", originalNum1, originalNum2, num1);

    return 0;
}

