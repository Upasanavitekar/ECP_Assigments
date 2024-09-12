#include<stdio.h>
int main()
{
    int date, month, year;
    printf("Enter the year : ");
    scanf("%d", &year);
    printf("\n Enter the month : ");
    scanf("%d", &month);
    printf("\n Enter the date : ");
    scanf("%d", &date);
    weekday(date, month, year);
    return 0;
 }
 
int weekday(int date, int month, int year)
{
    int day_Week, yr, yq;
    yr = year % 100;
    yq = year / 100;
    printf("\nDate is : %d / %d / %d \n\n", date, month, year);
    day_Week = 1.25 * yr + find(month, year) + date - 2 * (yq % 4);
    day_Week = day_Week % 7;
    switch (day_Week)
    {
         case 0:  printf("Day is : Saturday");
                        break;
         case 1:  printf("Day is : Sunday");
                        break;
         case 2:  printf("Day is : Monday");
                        break;
         case 3:  printf("Day is : Tuesday");
                        break;
         case 4:  printf("Day is : Wednesday");
                        break;
         case 5:  printf("Day is : Thursday");
                        break;
         case 6:  printf("Day is : Friday");
                        break;
         default:  printf("Data is wrong");
    }
    return 0;
}
    
int find(int month, int year)
{
    int find_month, leap_yr;
    if ((year % 100 == 0) && (year % 400 != 0))
            leap_yr = 0;
    else if (year % 4 == 0)
            leap_yr = 1;
    else
            leap_yr = 0;
    find_month = 3 + (2 - leap_yr) * ((month + 2) / (2 * month))+ (5 * month + month / 9) / 2;
    find_month = find_month % 7;
    return find_month;
}
