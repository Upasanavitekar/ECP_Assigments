#include <stdio.h>

int main() 
{

    int marks[5];    
    int total = 0;   
    float average; 

    
    printf("Enter the marks for 5 subjects:\n");
    for (int i = 0; i < 5; i++) 
	{
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%d", &marks[i]); 
        total += marks[i];    
    }

   
    average = total / 5.0; 

    
    printf("Total marks: %d\n", total);     
    printf("Average marks: %.2f\n", average); 

    return 0;
}
