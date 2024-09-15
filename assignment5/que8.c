#include <stdio.h>


int linearSearch(int arr[], int size, int target) 
{

    for (int i = 0; i < size; i++) 
	{
       
        if (arr[i] == target) 
		{
            return i; 
        }
    }
    return -1;
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
    int index;    


    acceptArray(arr, size);


    printf("Array:\n");
    printArray(arr, size);


    printf("Enter the number to search: ");
    scanf("%d", &target);


    index = linearSearch(arr, size, target);


    if (index != -1) {
        printf("Number %d found at index %d.\n", target, index);
    } 
	else 
	{
        printf("Number %d not found in the array.\n", target);
    }

    return 0;
}
