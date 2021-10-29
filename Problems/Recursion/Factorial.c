#include<stdio.h>


int fact(int n)
{
	
	if(n==0)
	{
		return 1; 
	}
	int k=fact(n-1);
	int c=n*k;
	return c;
}

int main()
{
	int n=5;
	int i;
	i=fact(n);
	printf("The Factorial of %d : \n%d",n,i);
	return 0;
}

#OUTPUT:
The Factorial of 5 :
120

