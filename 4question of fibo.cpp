#include<iostream>
#include<math.h>
using namespace std;
int fibo(int n)
{
	double phi=1.6180339;
	int a[6]={0,1,1,2,3,5};
	int b=5;
	int fn=5;
	if(n<6)
	{
		return a[n];
	}
	while(b<n)
	{
		fn=round(fn*phi);
		b++;
	}
	return fn;
}
int main()
{
	
   int n;
   cin>>n;
   cout<<fibo(n);
   	
}
