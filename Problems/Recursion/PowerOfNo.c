#include<stdio.h>

int f(int x, int k)
{
	
	if(k==0)
	{
		return 1;
	}
	

	return f(x,k-1)*x;
	
}
int main()
{
	int x=2;
	int k=5;
	int i;
	
	printf("f(%d,%d) =",x,k);
	for(i=1; i<=k; i++)
	{
		printf(" %d ",x);
		
	}
	printf("\n");
    i= f(x,k);
    printf("%d ",i);
}


#OUTPUT:
f(2,5) = 2  2  2  2  2
32
