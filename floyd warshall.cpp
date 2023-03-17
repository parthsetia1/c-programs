#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int d[100][100],i,j,n,k;
	//n is the number of buildings or cities
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>d[i][j];
		}
	}
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);//find the all pair shortest path
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<d[i][j]<<" ";
		}
		cout<<endl;
	}
}
