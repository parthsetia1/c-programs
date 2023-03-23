#include<iostream>
using namespace std;
int main()
{
	int n,pos;
	cin>>n>>pos;
	if(n&(1<<pos)!=0)
	{
		cout<<1;
	}
	else{
		cout<<0;
	}
}
