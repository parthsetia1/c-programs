#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			break;
		}
		else
		{
			continue;
		}
	}
	if(i==n)
	{
		cout<<"it is a prime number";
		
	}
	else
	{
		cout<<"it is not a prime number";
	}
}
