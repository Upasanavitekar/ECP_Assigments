#include <stdio.h>

int main() 
{
    int start, end;


    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);


    if (start > end) 
	{
        printf("Invalid range. Start should be less than or equal to end.\n");
        return 1;
    }


    for (int i = start; i <= end; i++) 
	{
        printf("Table for %d:\n", i);


        for (int j = 1; j <= 10; j++) 
		{
            printf("%d x %d = %d\n", i, j, i * j);
        }


        printf("\n");
    }

    return 0;
}

