#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,m,r,i,j,count;
	char a[100],b[50],received[100],remainder[30],temp[50],quot[100],key[50];
	cout<<"sender site";
	cout<<"\nenter the size of data:";
	cin>>n;
	cout<<"enter the size of divisor:";
	cin>>m;
	r=m-1;
	cout<<"enter the data:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the divisor";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	strcpy(key,b);
	for(i=n;i<n+r;i++)
	{
		a[i]=0;
	}
	for(i=0;i<m;i=i++)
	{
	    temp[i]=a[i];
	}
	    for(i=0;i<n;i++)
	    {
	    	quot[i]=temp[0];
	    	if(quot[i]=='0')
	    	for(j=0;j<m;j++)
	    		
				key[j]='0'; else
				
	    		for(j=0;j<m;j++)
	    		b[j]=key[j];
	    		for(j=m-1;j>0;j--){
				
	    		if(temp[j]==key[j])
	    		remainder[j-1]='0';
				else
	    		remainder[j-1]='1';
	    	}
			remainder[m-1]=a[i+m];
			strcpy(temp,remainder);	
			
		}
		strcpy(remainder,temp);
		cout<<"quotient is:";
		for(i=0;i<n;i++)
		{
			cout<<quot[i];
		}
		cout<<"\nremainder is:";
		for(i=0;i<m-1;i++)
		{
			cout<<remainder[i];
		}
		cout<<"\ndata that will send is:";
		for(i=0;i<n;i++)
		{
			cout<<a[i];
		}
		for(i=0;i<m-1;i++)
		{
			cout<<remainder[i];
		}
		
	    
	
	
}
