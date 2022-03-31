#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quickSort(int *arr, int first,int last){
    int i,j,pivot,temp;

    if(first<last){
        pivot=first;
        i=first;
        j=last;
        while(i<j){
            while(arr[i]<=arr[pivot]&&i<last){
                i++;
            }
            while(arr[j]>arr[pivot]){
                i--;
            }
            if(i<j){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[pivot];
        arr[pivot]=arr[j];
        arr[j]=temp;
        quickSort(arr,first,j-1);
        quickSort(arr,j+1,last);
    }

}
int main(int argc, char* argv[]){
    int i;
    if(argc!=2){
        printf("\nUnsuspected arguments");
        return 1;
    }
    int ch;
    FILE *file;
    int length=0;
    if((file=fopen(argv[1],"r"))==NULL){
        printf("\nCan`t open the file");
        return 2;
    }
    fseek(file,0,SEEK_SET); 

    while((ch=getc(file))!=EOF){
        length++;
    }
    fseek(file,0,SEEK_SET); 

    int* array=(int*)malloc(sizeof(int)*length);

    for(i=0;i<length;i++){
        fscanf(file, "%d",&array[i]);
    }

    quickSort(array,0,length-1);

    printf("Sorted elements: ");
    for(i=0;i<length;i++){
        printf(" %d",array[i]);
    }
    printf("\n");
    return 0;

}


