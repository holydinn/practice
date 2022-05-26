#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
//#define RAND_MAX 32767
const long int RMAX = 32767;

void quickSort(double *arr, long int first, long int last)
{
    long int i, j, pivot;
    double temp;

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
                j--;
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
    long int i;
    if (argc != 2)
    {
        printf("\nUnsuspected arguments");
        return 1;
    }
    long int length = atoi(argv[1]);
    while (length < 1)
    {
        printf("\nIncorrect length. Try again:");
        scanf("%ld ", &length);
    }
    double *array = (double *)malloc(length * sizeof(double));

    for (i = 0; i < length; i++)
    {
        array[i] = (double)rand() / RAND_MAX * RMAX;
    }

    clock_t time_start =clock();
    quickSort(array, 0, length - 1);
    clock_t time_end = clock()-time_start;
    
    printf("Sort time: %f\n",(double)time_end/CLOCKS_PER_SEC);
    free(array);
    return 0;
}
