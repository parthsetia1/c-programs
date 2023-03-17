#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,max,min;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
		min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<min;
}
	
