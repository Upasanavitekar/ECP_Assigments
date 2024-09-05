#include<stdio.h>
int main()
{

	int a,b,c,avg;
	printf("enter three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	avg = (a + b + c)/3;
	printf("average of number is %d\n",avg);
	return 0;
}
