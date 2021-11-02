#include<stdio.h>

int f(int n)
{
	if(n==0)
	{
		return ;
	}
	
	printf("%d ",n);
	f(n-1);
	printf("%d ",n);
}
int main()
{
	int n=5;
	f(n);
  
}

#OUTPUT:
5 4 3 2 1 1 2 3 4 5
