#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
	double n,a,b,c;
	cin>>n;//input for n.
	a=pow(1.61803398875,n);
	b=pow(-0.618033988,n);
	c=(a-b)/sqrt(5);
	cout<<c;
	
	
}
