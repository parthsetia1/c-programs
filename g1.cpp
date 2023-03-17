#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j,k,t,s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			a[j]<a[i];
			a[i]=t;
		}
		for(k=i+1;k<n;k++)
		{
			a[i]<a[k];
			a[i]=s;
		}
	}
	if(t==s)
	cout<<t;
	else
	cout<<"not founded";
}
