// C program to find average of n number:

#include<stdio.h>

int main()
{
	int i;
    int n=6;
    int sum=0;
    int avg=0;
    int a[6]={3,4,6,2,6,9};
    for(i=0; i<6; i++)
    {
    	printf("%d ",a[i]);
    	sum+=a[i];
    
	}
   	printf("\nsum %d",sum);
	avg= sum/n;
	printf("\navg %d",avg);
	

	return 0;
}

#OUTPUT:
3 4 6 2 6 9
sum 30
avg 5
