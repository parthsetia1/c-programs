#include<iostream>
#include<algorithm>
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
	cout<<"enter the number whose count is to be find";
	cin>>b;
	cout<<"count is"<<count(a,a+n,b);
	
}
