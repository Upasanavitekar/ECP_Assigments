#include<stdio.h>
int main()
{
     float price,discount,dicounted_price,total_price;
     int qty,unitprz = 5;
     printf("enter the quantity:");
     scanf("%d",&qty);
     if(qty > 30)
	     discount = 0.10;

     else if(qty > 50)
	     discount = 0.15;
     else
     {
   	  printf("no discount GET LOST (*.*)");
	  discount = 0.0;
     }
     total_price = qty * unitprz;
     total_price = total_price -(total_price * discount);
     printf("total price = %f\n discount= %f\n",total_price,discount);
} 


