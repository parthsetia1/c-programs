#include<iostream>
using namespace std;
int main()
{
	int n,arr[100],count=0;
	char sum[100];
	cout<<"enter the number of data:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		count+=arr[i];
	}
	
	cout<<count;
	
}
