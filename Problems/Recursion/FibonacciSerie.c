#include<stdio.h>

int fib(int n)
{
	
	if(n==0)
	{
		return 0; 
	}
	else if (n==1)
	{
		return 1;
	}
	
	return fib(n-1)+fib(n-2);
}

int main()
{
	int n;
	printf("The Fibonacci series is:\n");
	fib(n);
	for(n=0; n<10; n++)
	{
		printf(" %d ",fib(n));
	}
	printf("\n");
	return 0;
}

#OUTPUT:

The Fibonacci series is:
 0  1  1  2  3  5  8  13  21  34

