#include<stdio.h>

int f(int n)
{
	if(n==0)
	{
		return;
	}
	
	printf("%d ",n);
	f(n-1);
}
int main()
{
	int n=5;
	f(n);
}


#Output:
5 4 3 2 1
