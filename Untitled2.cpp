#include<iostream>
using namespace std;
int main()
{
	int a[100],p[100],n,i,w,max=p[0],k,sum=0;
	cin>>w;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int parth();
	
	
	for(i=0;i<n;i++)
	{
		if(max<p[i])
		{
			k=i;
			max=p[i];
		}
	}
    sum=sum+a[k];
	if(sum<w)
	{
		cout<<a[k]<<endl;
		a[k]=0;
		
		}	
	parth();	

	
	
}
