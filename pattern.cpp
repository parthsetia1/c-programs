#include<stdio.h>
int main()
{
	int a,i,j,k;
	printf("how many lines u want:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		for(k=i-1;k>=1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}
