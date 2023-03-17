#include<iostream>
using namespace std;
int *insertion(int *arr,int n)
{
	int i,j,swap;
	for(i=1;i<n;i++)
	{
		for(j=i;j>=1;j--)
		{
			
			if(arr[j-1]<arr[j])
			{
				swap=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=swap;	
			}
		}
		return arr;
	}
}
int main()
{
	int arr[100],n,i;
	cout<<"enter the size of array:";
	cin>>n;
	cout<<"enter the elements of unsorted array:";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"sorted array in ascending order is:\n";
    cout<<insertion(arr,n);
}
