#include<iostream>
using namespace std;
int bintodec(int n)
{
	int x=1;
	int ans=0;
	while(x<=n)
	{
		x*=2;
	}
	x/=2;
	while(x>0)
	{
		int lastdigit=n/x;
		n=n-lastdigit*x;
		ans=ans*10+lastdigit;
		x/=2;
		
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<bintodec(n)<<endl;
}
