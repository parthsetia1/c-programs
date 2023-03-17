#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
	{
	char x[100],y[100];
	int m,n,i,j,c[100][100],count=0;
	cin>>x>>y;
	m=strlen(x);
	n=strlen(y);
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			c[i][j]=0;
		}
	}
	for(i=1;i<=m;i++)
	{
		c[i][0]=0;
	}
	for(i=1;i<=n;i++)
	{
		c[0][j]=0;
	}
	cout<<"Subsequence is : ";
	cout<<x[0];
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(x[i]==y[j])
			{
				cout<<y[j];
				c[i][j]=c[i-1][j-1]+1;
				count=c[i][j];
			}
			else
			{
				c[i][j]=max(c[i-1][j],c[i][j-1]);
			}
		}
	}
	cout<<endl;
	for(i=0;i<=m;i++)
	{
		for(j=0;j<=n;j++)
		{
			cout<<c[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"length of lcs is "<<count<<endl;
}
