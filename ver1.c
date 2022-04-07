#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void quickSort(int *arr, int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[i] <= arr[pivot] && i < last)
            {
                i++;
            }
            while (arr[j] > arr[pivot])
            {
                i--;
            }
            if (i < j)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quickSort(arr, first, j - 1);
        quickSort(arr, j + 1, last);
    }
}
int main(int argc, char *argv[])
{
     int i;
    if(argc<2){
        printf("\nNo arguments");
        return 1;
    }
    int length =argc-1;
    int *array = (int *)malloc(length * sizeof(int));
    for(i=0;i<m;i++){
        array[i]=atoi(argv[i+1]);
    }
    clock_t time_start =clock();
    quickSort(array, 0, length - 1);
    clock_t time_end = clock()-time_start;
    printf("\nSorted elements: ");
    for (i = 0; i < length; i++)
    {
        printf("%d", array[i]);
    }
    printf("\nSort time: %f",(double)time_end/CLOCKS_PER_SEC);
    return 0;
}
