#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],mul[10][10],i,m,n,j,sum=0,sub=0,k;
	
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Sum:";
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" \t"<<a[i][j]+b[i][j];
		}
cout<<endl;
	}
	
	cout<<"Subtraction:";

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" \t"<<a[i][j]-b[i][j];
		}
cout<<endl;
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			mul[i][j]=0;
		    for(k=0;k<n;k++)
		    {
		        mul[i][j]+=a[i][k]*b[k][j];
		    }
		}
	}
cout<<"Multiplication:";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<" \t"<<mul[i][j];
		}
cout<<endl;
	}
}	
