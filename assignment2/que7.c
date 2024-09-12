#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year % 4==0)
	{
		printf("%d is leap year",year);
	}
	else if(year % 400 == 0)
	{
		printf("%d year is leap year",year);
	}
	else
	{
		printf("year is not leap year");
	}

	return 0;
}
