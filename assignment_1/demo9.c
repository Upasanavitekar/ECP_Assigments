#include<stdio.h>
int main()
{
	int a,b,c,d,e,rev,rem;
	printf("enter four digit number:");
	scanf("%d",&a);
	int ori = a;
	b= a/1000;
	a= a%1000;
	c= a/100;
	a= a%100;
	d= a/10;
	a= a%10;
	e = a;
		
	printf(" %d\t %d\t  %d\t  %d\t\n",b,c,d,e);
	b = b*1000;
	c = c*100;i
	d = d*10;
	e = e*1;
	printf("%d = %d\t %d\t %d\t %d\t\n",ori,b,c,d,e);

	while (ori != 0)
			{
				rem = ori % 10;
				rev = rev * 10 + rem;
				ori = ori / 10;
			}
			printf("Rev %d  =  %d \n", a, rev);
	
	
	return 0;

}
