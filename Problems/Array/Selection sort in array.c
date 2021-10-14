#SELECTION SORT IN ARRAY

#include<stdio.h>

int findMinIdx(int arr[], int start, int end)
{
    int i;
    int min_idx=start;
    for(i=start+1; i<=end; i++)
    {
        if(arr[min_idx]>arr[i])
        min_idx=i;
    }
    return min_idx;
}
 
void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}



void selectionsort(int arr[], int start, int end)
{
    int i,x,min_idx;

    for(i=start; i<=end; i++)
    {
        min_idx=i;
        x=findMinIdx(arr,i,end);
        swap(&arr[min_idx],&arr[x]);
    }

}


void print(int arr[])
{
    int i;
    for(i=0; i<7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
   

}


void main()
{
    int arr[]={4,7,9,2,6,0,1};
     printf("given array:\n");
    print(arr);
    selectionsort(arr,0,6);
    printf("Sorted array: \n");
    print(arr);
}

#OUTPUT:

given array:
4 7 9 2 6 0 1
Sorted array:
0 1 2 4 6 7 9
