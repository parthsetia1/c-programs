#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a[100],k,r,b[100],i,j,count,s[100],re[100];
	cout<<"enter the number of bits : ";
	cin>>k;
	cout<<"enter the bits : \n";
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=k;i++)
	{
		if(pow(2,i)>k+i)
		{
			r=i;
			break;
		}
	}
	cout<<"r="<<r<<"\n";
	for(j=0;j<r;j++)
	{
		for(i=j;i<j+r;i++)
		{
			if(i>k-1)
			{
				i=0;
				count+=a[0];
				break;
			}
			count+=a[i];
		}
		b[j]=count%2;
		count=0;
	}
	cout<<"enter the recieved message:\n";
	for(i=0;i<k;i++)
	{
		cin>>re[i];
	}
	cout<<"\n";
	count=0;
	for(j=0;j<r;j++)
	{
		for(i=j;i<j+r;i++)
		{
			if(i>k-1)
			{
				i=0;
				count+=re[0];
				break;
			}
			count+=re[i];
		}
		count=count+b[j];
		s[j]=count%2;
		count=0;
	}
	count=0;
	for(i=0;i<r;i++)
	{
		count+=s[i];
	}
	if(count>0)
	{
		cout<<"error\n";
	}
	else if(count==0)
	{
		cout<<"no error";
	}
}
