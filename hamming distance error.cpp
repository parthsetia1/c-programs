#include<iostream>
using namespace std;
int main()
{
	char n1[100],n2[100],n3[100];
	int i,n,count=0;
	cout<<"enter the number of bits";
	cin>>n;
	cout<<"enter the sender data";
	for(i=0;i<n;i++)
	{
		cin>>n1[i];
	}
	cout<<"enter the recieved data";
	for(i=0;i<n;i++)
	{
		cin>>n2[i];
	}
	for(i=0;i<n;i++)
	{
		if(n1[i]==n2[i])
		{
			n3[i]=0;
		}
		else 
		n3[i]=1;
	}
	for(i=0;i<n;i++)
	{
	    if(n3[i]==1)
		{
			count=count+1;
		}	
		else
		count+=0;
	}
	if(count>0)
	{
		cout<<count<<" error bit";
	}
	else if(count==0)
	{
		cout<<"0 error bit";
	}
}
