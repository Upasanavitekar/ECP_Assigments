#include<stdio.h>
int main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if((ch >= 65 && ch <= 90) || ( ch >= 97 && ch <= 122))
	{
		printf("ALPHABATE\n");
		if(ch >= 65 && ch <= 90)
			printf("UPPERCASE\n");
		else
			printf("lowercase\n");
	}
	else if(ch >=48 && ch <= 57)
		printf("DIGIT\n");
	else if(ch == 32)
		printf("SPACE\n");
	else if(ch == 9)
		printf("TAB\n");
	else if(ch == 13)
		printf("carriage return\n");
	else if(ch == 10)
		printf("NEW LINE\n");
	else
		printf("Not Listed Above ('_')\n");
}
