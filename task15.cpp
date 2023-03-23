#include<iostream>
using namespace std;
int main()
{
	int n,i,count=1;;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	while(count<n){
		for(i=0;i<n-count;i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
