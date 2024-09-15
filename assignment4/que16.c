#include <stdio.h>


void printHexadecimal(int number) 
{

    char hexDigits[] = "0123456789ABCDEF";


    if (number == 0) 
	{
        printf("0");
        return;
    }


    char hex[8];
    int index = 0;


    while (number > 0) 
	{
        int remainder = number % 16;    
        hex[index] = hexDigits[remainder]; 
        number = number / 16;     
        index++;                       
    }

  
    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) 
	{
        printf("%c", hex[i]);  
    }
    printf("\n");
}

int main() 
{
    int num;


    printf("Enter a number to convert to hexadecimal: ");
    scanf("%d", &num);


    printHexadecimal(num);

    return 0;
}
