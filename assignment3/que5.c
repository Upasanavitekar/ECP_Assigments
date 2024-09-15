#include <stdio.h>

int main() 
{
    int num, factorial = 1;


    printf("Enter a number: ");
    scanf("%d", &num);


    printf("Factorial of %d: ", num);
    for (int i = num; i >= 1; i--) 
	{
        factorial *= i; 
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }
    printf(" = %d\n", factorial);

    return 0;
}
