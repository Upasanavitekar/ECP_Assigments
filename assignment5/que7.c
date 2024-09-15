#include <stdio.h>


void selectionSort(int arr[], int size) 
{

    for (int i = 0; i < size - 1; i++) 
	{

        int minIndex = i;


        for (int j = i + 1; j < size; j++) 
		{
            if (arr[j] < arr[minIndex]) 
			{
                minIndex = j;
            }
        }


        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


void bubbleSort(int arr[], int size) 
{

    for (int i = 0; i < size - 1; i++) 
	{

        int swapped = 0;


        for (int j = 0; j < size - i - 1; j++) 
		{
            if (arr[j] > arr[j + 1]) 
			{

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;


                swapped = 1;
            }
        }


        if (!swapped) 
		{
            break;
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


    acceptArray(arr, size);


    printf("Original array:\n");
    printArray(arr, size);


    selectionSort(arr, size);
    printf("Array after selection sort:\n");
    printArray(arr, size);


    printf("Enter %d new numbers for bubble sort:\n", size);
    acceptArray(arr, size);


    printf("Array before bubble sort:\n");
    printArray(arr, size);


    bubbleSort(arr, size);
    printf("Array after bubble sort:\n");
    printArray(arr, size);

    return 0;
}
