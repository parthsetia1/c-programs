#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i,m,n,count=0,result=-1;
	char t[100],p[100];
	cin>>t>>p;
	m=strlen(t);
	n=strlen(p);
	if(m<n)
	{
		cout<<"The inputs are invalid";
	}
	else//m>=n
	{
		//do matching
		for(i=0;i<m;i++)
		{
			if(p[count]==t[i])
			{
				count=count+1;
				if(count==n)
				{
					result=i-n;
				}
			}
			else
			{
				count=0;
			}
		}
		if(result>=0)
		{
			cout<<"Pattern is found at shift:"<<result;
		}
		else if(result==-1)
		{
			cout<<"No such pattern found";
		}
		
	}
}
