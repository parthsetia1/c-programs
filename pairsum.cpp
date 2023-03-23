#include<iostream>
using namespace std;
int main()
{
	int n,a[n],i,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(int i=0;i<n;i++)
	{
		int sum=0;
		sum+=a[i];
		for(int j=i+1;j<n;j++)
		{
			sum+=a[j];
			if(sum==k)
			{
				cout<<a[i]<<" "<<a[j]<<endl;
			
			}
			sum=sum-a[j];
			
		}
	}
	return 0;
}
