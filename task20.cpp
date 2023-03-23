#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[n];
	}
	int max=INT_MIN,count=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>max&&a[i]>a[i+1])
		{
			count++;
			max=a[i];
		}
		else if(a[i]>max)
		{
			max=a[i];
		}
		else
		{
			continue;
		}
	}
	cout<<count;
}
