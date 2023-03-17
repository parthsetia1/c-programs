#include<iostream>
using namespace std;
int minmax(int n,int a[])//function to find min and max elements in the array
{
	int i,max=a[0],min=a[0],answer;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	answer=max-min;
	return answer;//this will return the difference between the min and max elements
	
}
int main()
{
	int n,a[100],i;
	cout<<"enter the size of the array";
	cin>>n;
	cout<<"enter the elements of array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<minmax(n,a);//calling of the function
}
