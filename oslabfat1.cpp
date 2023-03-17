#include<stdio.h>
int main()
{
	int a[100],n,i,j,count=1,b[100];
	printf("enter the number of elements");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				
			}
		}
		printf("%d(%d)->",a[i],count);
		count=1;
		b[i]=1;
		if(b[i]>1)
		{
			pass;
		}
	}
	
}
