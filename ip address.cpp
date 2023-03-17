#include<iostream>
using namespace std;
struct ip
{
	int a[3];
};
int main()
{
	struct ip v[4];
	int i,j,max,min,flag=1;
	cout<<"enter ip address\n";
	for(i=0;i<4;i++)
	{
		cout<<"enter value for "<<i+1<<"block";
		for(j=0;j<3;j++)
		cin>>v[i].a[j];
		
	}
	for(i=0;i<4;i++)
	{
		if(v[i].a[0]>=2&&v[i].a[1]>=5&&v[i].a[2]>=5)
		{
			flag=0;
			break;
		}
		else if(v[i].a[0]==0)
		{
			flag=0;
			break;
		}
		
	}
	if(flag==0)
	{
		cout<<"invalid ip address";
	}
	else if(flag==1)
	{
		cout<<"valid ip address";
	}
}
