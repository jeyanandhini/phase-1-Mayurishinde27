//Program to find Rotation in array

#include<stdio.h>

void ShiftArray(int a[], int n)
{
    int i;
	int temp;
    temp = a[0];
    for(i = 0; i <= n-1; i++)
	{
        a[i] = a[i+1];
    }
   
    a[i]=temp;
}

void Rotation_Array(int a[],int n,int pos)
{
	int i;
	for(i=0; i< pos; i++)
	{
		ShiftArray(a,n);
    
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
int main()
{
	int i;
	int n=4;
	int pos=1;
	int a[]={1,2,3,4,5};
	printf("given array\n");
	print(a,n);
	printf("Rotation_Array\n");
	Rotation_Array(a,n,pos);
	print(a,n);
	
}

#OUTPUT:

given array
1 2 3 4 5
Rotation_Array
2 3 4 5 1
