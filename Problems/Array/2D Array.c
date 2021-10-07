
#PRINTING THE VALUES IN ARRAY.
  
#include<stdio.h>
print(int arr[][6])
{   
    int i,j;
	for (i=0;i<6; i++)
	{
		for(j=0; j<6; j++)
		{
	     	printf("%2d ",arr[i][j]);
		}
	 printf("\n");
	}
	
}
void main()
{
	 int i,j;
	 int put;
	 put=1;
	int arr[6][6];

	for(i=0;i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			arr[i][j]=put++;
		}
	}
	print(arr);
}

#OUTPUT:

 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
19 20 21 22 23 24
25 26 27 28 29 30
31 32 33 34 35 36







