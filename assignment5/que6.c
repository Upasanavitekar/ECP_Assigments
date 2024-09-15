#include <stdio.h>


int removeDuplicates(int arr[], int size) 
{
    int uniqueSize = 0; 

 
    for (int i = 0; i < size; i++) 
	{
        int isDuplicate = 0; 

        
        for (int j = 0; j < uniqueSize; j++) 
		{
            if (arr[i] == arr[j]) 
			{
                isDuplicate = 1; 
                break; 
            }
        }

    
        if (!isDuplicate) 
		{
            arr[uniqueSize] = arr[i]; 
            uniqueSize++; 
        }
    }

    return uniqueSize; 
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
    int size = 7;       
    int arr[size];    


    acceptArray(arr, size);


    printf("Original array:\n");
    printArray(arr, size);


    int newSize = removeDuplicates(arr, size);


    printf("Array after removing duplicates:\n");
    printArray(arr, newSize);


    printf("Number of unique elements: %d\n", newSize);

    return 0;
}
