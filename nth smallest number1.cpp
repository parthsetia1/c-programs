#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j,t,k;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	for(i=0;i<n;i++)
	{
		cin>>a[i];}
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
	cin>>k;
	cout<<a[k-1];
	
}
