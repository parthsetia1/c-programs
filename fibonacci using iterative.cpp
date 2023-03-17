#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b,f;
	cin>>n;
	if(n==0)
	cout<<0;
	if(n==1)
	cout<<1;
	a=0;
	b=1;
	if(n>=2)
	
	{
		cout<<0<<' '<<1<<' ';
		for(i=2;i<=n;i++)
		{
			f=a+b;
			a=b;
			b=f;
			
			cout<<f<<' ';
		}
		
	}
	
}
