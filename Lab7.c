#include <stdlib.h>
#include <stdio.h>


void printArray(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void swap(int *first, int*second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

void copyArray(int dest[], int source[], int size)
{
    for(int i = 0; i<size; i++)
    {
        dest[i] = source[i];
    }
}

void bubbleSort(int arr[], int size)
{
    int swapCounter[size];
    int i;
    int j;

    for(i = 0; i<size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j]> arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);

            }
        }

    }
    for(i = 0; i < size; i++)
    {
        printf("%d : %d\n",arr[i], swapCounter[arr[i]]);
    }

}




int main(void){
    int arr1[] = {97,16,45,63,13,22,7,58,72};
    int arr2[] = {90,80,70,60,50,40,30,20,10};

    int arraySize = sizeof(arr1) / sizeof(arr1[0]);
    int arraySize1 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Bubble Sort for Array 1\n");
    bubbleSort(arr1,arraySize);

    printf("Bubble Sort for Array 2\n");
    bubbleSort(arr2,arraySize1);


    return 0;
}
