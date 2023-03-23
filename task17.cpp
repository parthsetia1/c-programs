#include<iostream>
using namespace std;
int main()
{
	int n,value,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>value;
	int max=INT_MIN;
	for(i=0;i<=value;i++)
	{
	
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else{
			continue;
		}
	}
	cout<<max;
	
 } 
