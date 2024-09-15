#include <stdio.h>


void printBinary(int number) 
{

    if (number == 0) 
	{
        printf("0");
        return;
    }


    int binary[32];
    int index = 0;

  
    while (number > 0) 
	{
        binary[index] = number % 2; 
        number = number / 2;   
        index++;            
    }


    for (int i = index - 1; i >= 0; i--) 
	{
        printf("%d", binary[i]);
    }
}

int main() 
{
    int num;


    printf("Enter a number to convert to binary: ");
    scanf("%d", &num);


    printf("Binary representation: ");
    printBinary(num);
    printf("\n");

    return 0;
}

