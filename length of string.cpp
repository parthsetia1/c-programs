#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[100],b[100],n1,n2,i,r=0,s=0,result;
	cin>>n1;//length of first string.
	cin>>n2;//length of second string.
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n1;i++)
	{
		r=r+ pow(2,n1-i-1)*a[i];//this will convert first binary string into an integer
		
	}
	for(i=0;i<n2;i++)
	{
		s=s+pow(2,i)*b[n2-i-1];//this will convert the second binary string into integer
	}
	result=r*s;
	cout<<result<<endl;
	
	
}
