#include<stdio.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int a[],int n)
{
		int i;
		int j;
		for(i=0; i<n-1; i++)
		{
		int min_idx = i;
		for(j=i; j<=n-1; j++)
		{
			if(a[min_idx]>a[j])
			{
				min_idx = j;
			}
		}
		swap(&a[i],&a[min_idx]);
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
	int n=5;
	int a[]={3,6,0,2,5};
	printf("The given array:\n");
	print(a,n);
	selectionSort(a,n);
	printf("The sorted elements are:\n");
	print(a,n);

}


#Output:
The given array:
3 6 0 2 5
The sorted elements are:
0 2 3 5 6
