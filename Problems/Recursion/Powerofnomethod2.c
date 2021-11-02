#include<stdio.h>
	
int f(int x,int n)
{
	int i;
	int j;
	if(n==0)
	{
		return 1;
	}
	
	i=f(x,n/2)*f(x,n/2);  //for even number
	if(n%2==0)
	{
		return i;
	}
	j=i*x;              //for odd number
	if(n%2!=0)
	{
		return j;
	}

}

void main()
{
	int x=2;
	int n=4;
	int i;
	printf("%d power %d is:\n",x,n);
	i= f(x,n);
    printf("%d ",i);
	
}

#OUTPUT:
2 power 4 is:
16
