#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,min;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	cout<<min;
}
