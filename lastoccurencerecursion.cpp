#include<iostream>
using namespace std;
int lastocc(int arr[],int n,int i,int key)
{
	if(i==n)
	{
		return -1;
		
	}
	int restarray=lastocc(arr,n,i+1,key);
	if(restarray!=-1)
	{
		return restarray;
	}
	if(arr[i]==key)
	{
		return i;
	}
	return -1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<lastocc(arr,n,0,k);
}
