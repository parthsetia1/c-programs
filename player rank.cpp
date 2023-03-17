#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,max,min,smax,smin;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	min=a[0];
	smax=a[0];
	smin=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
	for(i=0;i<n;i++)
	{
		if(smax<a[i]&&a[i]<max)
		{
			smax=a[i];
		}
	}
	cout<<smax<<endl;
	
		for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<min<<endl;
	if(smin==min)
	{
		smin=a[1];
	}
	for(i=1;i<n;i++)
	
	{
		if(smin>a[i]&&a[i]>min)
		{
			smin=a[i];
		}
	}
	cout<<smin<<endl;}
	
	
	
	
