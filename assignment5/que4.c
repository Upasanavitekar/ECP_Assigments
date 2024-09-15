#include <stdio.h>


int findMax(int arr[], int size) 
{
    int max = arr[0]; 

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }

    return max; 
}


int findMin(int arr[], int size) 
{
    int min = arr[0]; 

    for (int i = 1; i < size; i++) 
	{
        if (arr[i] < min) 
		{
            min = arr[i]; 
        }
    }

    return min;
}


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
    printf("Array elements are:\n");
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


    int max = findMax(arr, size);
    int min = findMin(arr, size);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
