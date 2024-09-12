#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	(year% 4 == 0 && year % 400 == 0) ? (year % 100 != 0) ? printf("Notleap year") : printf(" leap") : printf("not leap");
	return 0;
}
