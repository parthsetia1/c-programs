#include<iostream>
using namespace std;
int main()
{
	int n,max=0,wrapper=0;
	cin>>n;
	while(n>=0)
	{
		if(wrapper<3){
		
		max+=1;
		n=n-1;
		wrapper+=1;}
		else if(wrapper==3)
		{
			max+=1;
			wrapper=0;
		}
	}
	cout<<max;
}
