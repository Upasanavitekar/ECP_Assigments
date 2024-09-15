#include <stdio.h>


void acceptArray(int arr[], int size) 
{
    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


void printArray(int arr[], int size) 
{
    printf("The numbers are:\n");
    for (int i = 0; i < size; i++) 
	{
        printf("%d ", arr[i]); 
    }
    printf("\n");
}

int main() 
{
    int size = 5; 
    int arr[size]; 


    acceptArray(arr, size); 
    printArray(arr, size); 

    return 0;
}
