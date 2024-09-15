#include <stdio.h>


int binarySearch(int arr[], int size, int target) 
{
    int left = 0;         
    int right = size - 1;  

   
    while (left <= right) 
	{
        int mid = left + (right - left) / 2;

    
        if (arr[mid] == target) 
		{
            return mid; 
        }


        if (arr[mid] < target) 
		{
            left = mid + 1;
        }

        else 
		{
            right = mid - 1;
        }
    }

    return -1; 
}


void acceptArray(int arr[], int size) 
{
    printf("Enter %d sorted numbers:\n", size);
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
    int target;        
    int index;      


    acceptArray(arr, size);


    printf("Array:\n");
    printArray(arr, size);


    printf("Enter the number to search: ");
    scanf("%d", &target);


    index = binarySearch(arr, size, target);


    if (index != -1) 
	{
        printf("Number %d found at index %d.\n", target, index);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
