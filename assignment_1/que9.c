#include<stdio.h>
int main()
{
	float f1,C;
	printf("enter the temperature:");
	scanf("%f",&f1);
	C = (5.0/9.0)*(f1 - 32);
	printf("the converted temperature in celsius is %f\n",C);
	return 0;
}
