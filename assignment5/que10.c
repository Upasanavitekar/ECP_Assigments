#include <stdio.h>


int* linearSearch(int arr[], int size, int target) 
{
 
    for (int i = 0; i < size; i++) 
	{
        
        if (arr[i] == target) 
		{
            return &arr[i]; 
        }
    }
    return NULL; 
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
    int target;       
    int* address;      


    acceptArray(arr, size);


    printf("Array:\n");
    printArray(arr, size);


    printf("Enter the number to search: ");
    scanf("%d", &target);


    address = linearSearch(arr, size, target);


    if (address != NULL) 
	{
        printf("Number %d found at address %p.\n", target, (void*)address);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
