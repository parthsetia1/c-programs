#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,w,sum=0,count=0,j,t;
	cin>>n;//input for the number of items.
	cin>>w;//input for max weight allowed.
	for(i=0;i<n;i++)
	{
		cin>>a[i];//input for weight of each item.
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}// now the array is sorted.
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(sum<=w)
		{
			count=count+1;
			cout<<a[i]<<endl;//print the wieght of item which he can take along.
		}
	}
	cout<<count;//print the number of items he can take along.
	
	
}
