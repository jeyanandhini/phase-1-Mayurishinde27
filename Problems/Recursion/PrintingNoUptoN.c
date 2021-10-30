#include<stdio.h>

int f(int n)
{
	if(n==0)
	{
		return;
	}
	f(n-1);
	printf("%d ",n);
	
}
int main()
{
	int n=5;
	f(n);
}

#Output:
1 2 3 4 5
