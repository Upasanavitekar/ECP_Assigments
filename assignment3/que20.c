#include <stdio.h>


int isPrime(int num) 
{
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;


    for (int i = 3; i <= num / 2; i += 2) 
	{
        if (num % i == 0) return 0;
    }
    return 1;
}


int isArmstrong(int num) 
{
    int sum = 0, originalNum = num, digit;
    while (num > 0) 
	{
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {

    printf("Prime numbers between 1 and 100:\n");
    for (int i = 1; i <= 100; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");


    printf("Armstrong numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; i++) 
	{
        if (isArmstrong(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

