#include <stdio.h>


void printPattern1() 
{
    printf("Pattern 1:\n");
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}


void printPattern2() 
{
    printf("Pattern 2:\n");
    for (int i = 5; i >= 1; i--) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
}


void printPattern3() 
{
    printf("Pattern 3:\n");
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}


void printPattern4() 
{
    printf("Pattern 4:\n");
    for (int i = 5; i >= 1; i--) 
	{
        for (int j = 5; j >= 6 - i; j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("\n");
}


void printPattern5() 
{
    printf("Pattern 5:\n");
    char ch;
    for (ch = 'G'; ch >= 'A'; ch--) 
	{
        for (char c = 'A'; c < ch; c++) 
		{
            printf(" ");
        }
        for (char c = ch; c <= 'G'; c++) 
		{
            printf("%c ", c);
        }
        for (char c = 'G' - 1; c >= ch; c--) 
		{
            printf("%c ", c);
        }
        printf("\n");
    }
    for (ch = 'B'; ch <= 'G'; ch++) 
	{
        for (char c = 'A'; c < ch; c++) 
		{
            printf(" ");
        }
        for (char c = ch; c <= 'G'; c++) 
		{
            printf("%c ", c);
        }
        for (char c = 'G' - 1; c >= ch; c--) 
		{
            printf("%c ", c);
        }
        printf("\n");
    }
    printf("\n");
}


void printPattern6() 
{
    printf("Pattern 6:\n");
    char ch = 'A';
    for (int i = 1; i <= 4; i++) 
	{
        for (char c = ch; c < ch + i; c++) 
		{
            printf("%c ", c);
        }
        printf("\n");
        ch++;
    }
    printf("\n");
}


void printPattern7() 
{
    printf("Pattern 7:\n");
    char ch = 'A' + 4;
    for (int i = 1; i <= 4; i++) 
	{
        for (char c = ch; c >= 'A'; c--) 
		{
            printf("%c ", c);
        }
        printf("\n");
        ch--;
    }
    printf("\n");
}


void printPattern8() 
{
    printf("Pattern 8:\n");
    char ch = 'A';
    for (int i = 0; i < 4; i++) 
	{
        for (int j = 0; j < 4 - i; j++) 
		{
            printf("%c ", ch + j);
        }
        printf("\n");
    }
}

int main() {
    printPattern1();
    printPattern2();
    printPattern3();
    printPattern4();
    printPattern5();
    printPattern6();
    printPattern7();
    printPattern8();

    return 0;
}

