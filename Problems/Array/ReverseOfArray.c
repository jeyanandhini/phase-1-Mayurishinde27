//Program to find reverse of array

#include<stdio.h>

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void Reverse_Array(int a[],int n)
{
	int i;
	for(i=0; i<=n-i; i++)
	{
		swap(&a[i],&a[n-i]);
	}
}
void print(int a[],int n)
{
	int i;
	for(i=0; i<=n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void main()
{

    int n=4;
	int a[]={1,2,3,4,5};
	print(a,n);
    Reverse_Array(a,n);
	print(a,n);

}

#OUTPUT:

1 2 3 4 5
5 4 3 2 1
