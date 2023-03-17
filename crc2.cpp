#include<stdio.h>
int main()
{
	char a[100],b[100],c[100],temp[100],re[100];
	int n,m,i,j,k,r;
	printf("enter the length of data:");
	scanf("%d",&n);
	printf("enter the data:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the length of key:");
	scanf("%d",&m);
	printf("enter the key:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	r = m-1;
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		
	}
	for(i=n;i<n+r;i++)
	{
		c[i]=0;                                          
		
	}
	for (i = 0; i < n; i++)
{
j = 0;
k = i;
//check whether it is divisible or not
if (c[k] >= b[j])
{
for (j = 0, k = i; j < m; j++, k++)
{
if ((c[k] == 1 && b[j] == 1) || (c[k] == 0 && b[j] == 0))
{
c[k] = 0;
}
else
{
c[k] = 1;
}
}
}
}
for(i=0,j=n;i<r;i++,j++)
{
	re[i] = c[i];
}
for(i=0;i<r;i++)
{
	printf("%c",re[i]);
}
	
}
