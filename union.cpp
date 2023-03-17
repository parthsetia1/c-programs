#include<stdio.h>
union details
{
	char[10] panid;
	int[100] aadharid;
}d1;
int main()
{
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		scanf("%s",&d1.panid);
	}
	else if(n==1)
	{
		scanf("%d",&d1.aadharid);
	}
	else if(n==0)
	{
		printf("%s",d1.panid);
	}
	else if(n==1)
	{
		printf("%d",d1.aadharid);
	}
}
