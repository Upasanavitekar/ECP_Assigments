#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the coordinates:");
	scanf("%d%d",&x,&y);
	if(x == 0 && y == 0)
		printf("coordinates are on origin:");
	if(x >0 && y > 0)
		printf("coordinates are in 1st quadrant");
	else if(x>0 && y<0)
		printf("coordinates are in 2nd quadrant");
	else if(x<0 && y <0)
		printf("coordinates are in 3rd quadrant");
	else if(x < 0 && y > 0)
		printf("coordinates are in 4th quadrant");
}
	
