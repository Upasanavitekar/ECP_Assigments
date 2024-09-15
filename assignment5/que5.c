#include <stdio.h>


void findMaxMin(int arr[], int size, int *max, int *min) 
{
    *max = arr[0]; 
    *min = arr[0]; 

 
    for (int i = 1; i < size; i++) 
	{
        if (arr[i] > *max) 
		{
            *max = arr[i];
        }
        if (arr[i] < *min) 
		{
            *min = arr[i]; 
        }
    }
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
    int max, min;     


    acceptArray(arr, size);


    printArray(arr, size);


    findMaxMin(arr, size, &max, &min);


    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

    return 0;
}
