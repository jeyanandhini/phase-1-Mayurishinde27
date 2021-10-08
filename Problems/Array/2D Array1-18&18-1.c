Printing Arrays from 1-18 and 18-1
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
			if(put<19)
			{
			arr[i][j]=put++;
	    	}
			else
			{
			arr[i][j]=37-put++;
			}
		}
	}
	print(arr);
}

#OUTPUT:

 1  2  3  4  5  6
 7  8  9 10 11 12
13 14 15 16 17 18
18 17 16 15 14 13
12 11 10  9  8  7
 6  5  4  3  2  1
