//printing reverse no. in an array

#include<stdio.h>
void main()
{
	int i,j;
	int a[5]={1,2,3,4,5};
	for(i=0; i<5; i++)
	{
		printf("%d\n",a[i]);
	}

	for(j=4; j>=0; j--)
	{
		printf("\n%d ",a[j]);
	}
	
}

#OUTPUT:
1
2
3
4
5

5
4
3
2
1
