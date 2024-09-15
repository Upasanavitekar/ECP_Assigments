#include <stdio.h>


void printCharacter(char character, int times) 
{
   
    for (int i = 0; i < times; i++) 
	{
        printf("%c", character);  
    }
    printf("\n"); 
}

int main() 
{
    char ch;
    int count;


    printf("Enter a character to print: ");
    scanf("%c", &ch);

   
    printf("Enter how many times to print the character: ");
    scanf("%d", &count);

    
    printCharacter(ch, count);

    return 0;
}
