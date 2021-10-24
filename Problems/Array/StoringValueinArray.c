#include<stdio.h>

int main()
{
	int i;
	int a[5];
	printf("Enter the 5 numbers:\n");
	for(i=0; i<5; ++i)
	{
		scanf("%d",&a[i]);
	}
	printf("The array is:\n");
	for(i=0; i<5; ++i)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}

#OUTPUT:
Enter the 5 numbers:
1 2 3 4 5
The array is:
1
2
3
4
5
