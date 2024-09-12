#include<stdio.h>
int main()
{
	float num1,num2,div;
	printf("enter the numbers:\n");
	scanf("%f%f",&num1,&num2);
	if(num2!=0)
	{
		div = num1/num2;
		printf("division is %f",div);
	}
	else
	{
		printf("OOPS('^') sorry divide by zero ERROR....!!!");
	}
	return 0;
}

