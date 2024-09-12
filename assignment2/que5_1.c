#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?(a>c)?printf("a is greater"):printf("c is greater"):printf("b is greater");	
	return 0;
}
