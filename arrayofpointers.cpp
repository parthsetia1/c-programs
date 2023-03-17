#include<stdio.h>
int main()
{
	int a[100],n,i,j=0,*b[10],m,count=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("enter the number of unique elements:");
	scanf("%d",&m);
	printf("enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	while(j<m)
	{
		for(i=0;i<n;i++)
		{
			if(i==0)
			{
				b[j] = &a[i];
				count = a[i];
				j++;
			}
			else if(a[i]=count)
			{
				continue;
			}
			else if(a[i]!=count)
			{
				b[j] = &a[i];
				j++;
			}
			count = a[i];
			
		}
	}
	for(j=0;j<m;j++)
	{
		printf("%d",a[i]);
	}
}
