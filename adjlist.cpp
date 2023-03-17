#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	vector<int> arr[n+1];
	int a,b;
	for(int i=0;i<m;i++)
	{
		cin>>a>>b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for(int i=0;i<n+1;i++)
	{
		cout<<i<<"->";
		for(auto y : arr[i])
		{
		cout<<y<<"->"; 	
		}
		cout<<endl;
	}
}
