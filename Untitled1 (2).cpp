#include<stdio.h>
int main()
{
	int n,i,t,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=i%10;
		sum=sum+t*t*t;
		i=i/10;
		if(sum==i)
		{
			printf("%d",i);
		}
	}
	
}
