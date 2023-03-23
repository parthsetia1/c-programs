#include<iostream>
using namespace std;
bool prime(int num)
{
	int i;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a,b,i;
	cin>>a>>b;
	for(i=a;i<=b;i++)
	{
		if(prime(i)){
			cout<<i<<endl;
		}
	}
}
