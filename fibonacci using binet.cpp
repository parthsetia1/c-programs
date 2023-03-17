#include<iostream>
using namespace std;
int main()
{
	int n,i,b;
	cin>>n;
	if(n==1)
	cout<<1;
	if(n==0)
	cout<<0;
	if(n>=2)
	{
		
	cout<<0<<' '<<1<<' ';
	for(i=2;i<=n;i++)
	{
		b=(((1+5^0.5)/2)^n-((1-5^0.5)/2)^n)/5^0.5;
		cout<<b;
		
	}
}
}
