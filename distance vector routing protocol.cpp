#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	//infinity = 100
	int n,a[100][100],i,j,b,k,m;
	cout<<"enter the number of nodes:";
	cin>>n;
	cout<<"enter the distance between nodes:";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"from which node you want to start:";
	cin>>b;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
			
				for(k=1;k<=n;k++)
				{
					if(k != j)
					{
						a[i][j] = min(a[i][j],(a[i][k] + a[k][j]));
					}
				}
			
		}
	}
	cout<<"output is:"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
}
