#include<stdio.h>
int main()
{
	int num,rev=0,rem,ori;
	printf("enter the number\n");
	scanf("%d",&num);
	ori = num;
        while(num !=0)
	{
		rem = num%10;
		rev = rev*10 + rem;
		num = num/10;
		
	
	}
	printf("rev is %d\n",rev);
	if (rev == ori)
	{
   		printf("number is palindrome\n");
	}
	else
	{
		printf("number is not palindrome\n");
	}	
	return 0;
}
