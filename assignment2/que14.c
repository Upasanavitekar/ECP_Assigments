 


#include<stdio.h>
int main()

{
	int mon,year;
	printf("enter the year or month");
	scanf("%d %d",&mon,&year);

	switch(mon)
	{
		case 2 : if(mon == 2)
			{
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 29");
				else
					printf("year is not leap and days are 365 and in month days are 28");
			}
			break;	
		case 1 : if(mon == 1 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;

		case 3 : if(mon == 3 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 5 : if(mon == 5 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 7 : if(mon == 7 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 8 : if(mon == 8 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 10 : if(mon == 10 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 12 : if(mon == 12 ) 
			{
			
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 31");
		
				else
					printf("year is not leap and days are 365 and in month days are 31");
			}
			 break;
		case 4: if ( mon==  4 )
			{ 		
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 30");
		
				else
					printf("year is not leap and days are 365 and in month days are 30");
			}
			 break;
		case 6: if ( mon==  6 )
			{ 		
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 30");
		
				else
					printf("year is not leap and days are 365 and in month days are 30");
			}
			 break;
		case 9: if ( mon==  9 )
			{ 		
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 30");
		
				else
					printf("year is not leap and days are 365 and in month days are 30");
			}
			 break;
		case 11: if ( mon==  11 )
			{ 		
				if(year % 4==0 && year % 400 ==0)
					printf("year is leap and days are 366 and in month days are 30");
		
				else
					printf("year is not leap and days are 365 and in month days are 30");
			}
			 break;

	
	
	}
}
