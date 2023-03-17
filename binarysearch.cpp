#include <iostream>  

#include <algorithm>  
  
using namespace std;  
  
int main()  
{  
   int a[100],n,b,i;
	cout<<"enter the number of elements";
	cin>>n;
	cout<<"enter the array elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number";
	cin>>b;
	if(binary_search(a,a+n,b))
	{
		cout<<"element is present";
	}
	else 
	{
		cout<<"element is not present";
	}
}
