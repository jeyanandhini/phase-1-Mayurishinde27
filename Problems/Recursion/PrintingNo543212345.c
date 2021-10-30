#include<stdio.h>

int f(int n)
{
	if(n==1)
	{
		return 1;
	}
	
	printf("%d ",n);
	f(n-1);
	printf("%d ",n-1);
}
int main()
{
	int n=5;
	f(n);
  printf("%d ",n);
}


#OUTPUT:
5 4 3 2 1 2 3 4 5
