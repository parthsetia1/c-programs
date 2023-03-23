#include<iostream>
using namespace std;
void selectionsort(int arr[],int n)
{
	int min=INT_MAX;
	int temp,min_count,count=0;
	int i=0;
	while(i<n)
	{
	for(int i=0;i<n;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		    min_count=i;
		}
	}
	count++;
	temp=arr[i];
	arr[i]=arr[min_count];
	arr[min_count]=temp;
	i=count;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
int main()
{
	int n,arr[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,n);
}
