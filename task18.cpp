#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		int sum=a[i];
		cout<<endl<<sum;
		for(j=i+1;j<n;j++)
		{
			sum+=a[j];
			cout<<sum<<" ";
		}
	}
}
