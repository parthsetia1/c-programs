#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
	int s=0;
	int e=n-1;
	while(s<=e)
	{
		int mid=(s+e)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	return -1;
}
int main()
{
	int n,arr[n],i,key;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>key;
	cout<<binarysearch(arr,n,key);
}