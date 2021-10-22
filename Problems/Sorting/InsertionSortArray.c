#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void insertionSort(int a[], int n)
{
	int i;
	int j;
	int star;
	for(i=1; i<n; i++) 
	{
		star=a[i];
		j=i-1;
		
		while(j>=0 && a[j]>star)
		{
			a[j+1]=a[j];
		    j--;
		}	
		a[j+1]=star;
	
	}
	
}
	


void print(int a[],int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{
	int n=6;
	int a[]={6,8,3,5,0,2};
	printf("The given array:\n");
	print(a,n);
	printf("The sorted elements are:\n");	
	insertionSort(a,n);
	print(a,n);
	
}

#OUTPUT:
The given array:
6 8 3 5 0 2
The sorted elements are:
0 2 3 5 6 8
