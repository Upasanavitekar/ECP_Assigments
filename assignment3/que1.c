#include <stdio.h>

int main() 
{
    char ch;
    int num;


    printf("Enter a character: ");
    scanf(" %c", &ch);

   
    printf("Enter the number of times to print the character: ");
    scanf("%d", &num);


    for (int i = 0; i < num; i++) 
	{
        printf("%c", ch);
    }


    printf("\n");

    return 0;
}

