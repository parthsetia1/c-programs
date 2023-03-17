#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,a[100][100],b[100][100],c[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=0;
		}
	}
	for(k=1;k<=n;k++)
	{
		for(j=1;j<=n;j++)
		{
			for(i=1;i<=n;i++)
			{
				c[k][j]+=a[k][i]*b[i][j];
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<c[i][j]<<endl;
		}
	}
	
}
