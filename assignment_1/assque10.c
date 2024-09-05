#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,p,A;
	printf("enter the lengths:");
	scanf("%f%f%f",&a,&b,&c);
	p = a+b+c;
	s = (a+b+c)/2;
	A = sqrt((s * (s-a)*(s-b)*(s-c)));

	printf("perimeter of triangle: %f\n",p);
	printf("area of triangle is : %f\n",A);
}
