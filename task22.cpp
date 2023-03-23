#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	vector<int> result;
	bool f[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		f[i]=false;
	}
	for(i=0;i<n;i++)
	{
		if(f[arr[i]]==false)
		{
			result.push_back(arr[i]);
			f[arr[i]]=true;
			
		}
		else
		{
			continue;
		}
	}
	for(i=0;i<result.size();i++)
	{
		cout<<result[i];
	}
}
