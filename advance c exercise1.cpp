#include<stdio.h>
int main()
{
	int a[100],n,i,count=0,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			count=count+1;
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("count= %d \n",count);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
