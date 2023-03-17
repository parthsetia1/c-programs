#include<stdio.h>
int main()
{
	int a[100],n,m,i,median,root,c[100];
	int *b;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the median position:");
	scanf("%d",&m);
	median = a[m];
	c[0] = a[m];
	for(i=0;i<n;i++)
	{
		b=&median;
		if(i!=m)
		{
			if(a[i+1]<*b)
			{
				c[i] = a[i];
			}
			else if(a[i]>*b)
			{
				c[i+1] = a[i];
				median = a[i];
			}
		}
		else
		{
			i=i+1;
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",c[i]);
	}
	
}
