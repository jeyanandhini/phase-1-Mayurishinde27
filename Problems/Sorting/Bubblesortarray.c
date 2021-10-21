#include<stdio.h>
void swap(int* a, int* b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void bubblesort(int a[],int n)
{
	int i;
	int j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
			}
		}
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
	int a[6]={4,2,6,9,0,1};
	printf("The given array is:\n");
	print(a,n);
	bubblesort(a,n);
	printf("Sorted array is:\n");
	print(a,n);
	
}

#OUTPUT:
The given array is:
4 2 6 9 0 1
Sorted array is:
0 1 2 4 6 9
