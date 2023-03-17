#include<iostream>
using namespace std;
int main()
{
	int a[100],k,n,i,j,t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	if(k<n-1)
	{
		cout<<a[k-1];
	}
	else
	{
		cout<<" k should be less than n";
	}
	
	
}
