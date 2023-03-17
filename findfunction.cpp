#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int a[100],n,b,i;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number whose  to be find";
	cin>>b;
	auto result=find(a,a+n,b);
	if(result!=end(a))
	{
		cout<<"element is present";
	}
	if(result==end(a))
	{
		cout<<"element is not present";
	}
	
	
}
