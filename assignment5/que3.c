#include <stdio.h>


void reverseArray(int arr[], int size) 
{
    int start = 0;    
    int end = size - 1; 
    int temp;        

 
    while (start < end) 
	{
    
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--;
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
    int arr[] = {1, 2, 3, 4, 5}; 


    printf("Original array:\n");
    printArray(arr, size);


    reverseArray(arr, size);


    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}

