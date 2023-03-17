#include<iostream>
using namespace std;
main()
{
	int a;
	cin>>a;
	try
	{
		if(a<0)
		throw a;

    
	}
	catch(int x)
	{
		cout<<"Exception caught";
	}
	
	
	
	cout<<"\nend of program";
	
}
