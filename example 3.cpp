#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,n,i,l,j,end;
	cout<<"enter the starting address";
	cin>>a>>b>>c>>d;
	cout<<"enter the number of groups";
	cin>>n;
	cout<<"enter the number of customers";;
	cin>>l;
	for(i=1;i<=n;i++)
	{
		cout<<"the starting address "<<i<<"\t\tending address of group \n"<<i;
		cout<<a<<b<<c<<d;
		for(j=1;j<=l;j++)
		{
			if(d<255)
			{
				d=d+1;
				
			}
			else if(d==255)
			{
				c=c+1;
				d=0;
			}
		}
	    cout<<"\t\t"<<a<<b<<c<<d;
	}
	
}
