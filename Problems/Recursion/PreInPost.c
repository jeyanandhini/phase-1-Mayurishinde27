#include<stdio.h>

int f(int n)
{
	if(n==0)
	{
		return;
	}
	printf("pre %d\n",n);
	f(n-1);
	printf("in %d\n",n);
	f(n-1);
	printf("post %d\n",n);
}
int main()
{
	int n=4;
	f(n);
}

#OUTPUT:

pre 4
pre 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
in 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
post 3
in 4
pre 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
in 3
pre 2
pre 1
in 1
post 1
in 2
pre 1
in 1
post 1
post 2
post 3
post 4
