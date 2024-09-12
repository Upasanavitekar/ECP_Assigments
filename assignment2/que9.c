// using if-else and logical operator.: 


#include<stdio.h>
int main()

{
	int mon,year;
	printf("enter the year or month");
	scanf("%d %d",&mon,&year);
	if(mon <= 12)
	{
		if(mon == 2)
		{
			if(year % 4==0 && year % 400 ==0)
				printf("year is leap and days are 366 and in month days are 29");
			else
				printf("year is not leap and days are 365 and in month days are 28");
		}
		else if(mon == 1 || 3 || 5|| 7|| 8 || 10 || 12) 
		{
			
			if(year % 4==0 && year % 400 ==0)
				printf("year is leap and days are 366 and in month days are 31");
		
			else
				printf("year is not leap and days are 365 and in month days are 31");
		}
		else if ( mon==  4 || 6 || 9 || 11)
		{ 		
			if(year % 4==0 && year % 400 ==0)
				printf("year is leap and days are 366 and in month days are 30");
		
			else
				printf("year is not leap and days are 365 and in month days are 30");
		}
	
	
	}
}
