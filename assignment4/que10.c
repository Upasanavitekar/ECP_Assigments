#include <stdio.h>
#include <stdbool.h>


bool isLeapYear(int year) 
{

    if (year % 4 == 0) 
	{

        if (year % 100 == 0) 
		{

            if (year % 400 == 0) 
			{
                return true;  
            } 
			else 
			{
                return false; 
            }
        } 
		else 
		{
            return true; 
        }
    } 
	else 
	{
        return false; 
    }
}


void daysInMonth(int month, int year) 
{
    int days;

    
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) 
	{
        days = 31; 
    } 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days = 30;  
    } 
	else if (month == 2) 
	{
        
        if (isLeapYear(year)) 
		{
            days = 29;  
        } 
		else 
		{
            days = 28; 
        }
    } 
	else 
	{
        printf("Invalid month. Please enter a number between 1 and 12.\n");
        return; 
    }


    printf("Number of days in month %d of year %d: %d\n", month, year, days);
}

int main() 
{
    int month, year;


    printf("Enter the month (1-12): ");
    scanf("%d", &month);


    printf("Enter the year: ");
    scanf("%d", &year);


    daysInMonth(month, year);

    return 0;
}

