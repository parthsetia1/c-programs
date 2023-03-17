#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int b1,b2,b3,b4,a1,a2,a3,a4,cidr,nos,i,count,address,alloted=0,balance,address1;
	int s[100];
	cout<<"enter the values of ip address:";
	cin>>b1>>b2>>b3>>b4;
	a1=b1;
	a2=b2;
	a3=b3;
	a4=b4;
	cout<<"enter the cidr value:";
	cin>>cidr;
	cout<<"enter the number of subscribers:";
	cin>>nos;
	cout<<"enter the size of address:";
	for(i=0;i<nos;i++)
	{
		cin>>s[i];
	}
	cout<<"starting address:";
	cout<<b1<<"."<<b2<<"."<<b3<<"."<<b4<<endl;
	count=32-cidr;
	address=pow(2,count);
	for(i=1;i<address;i++)
	{
		if(b4<255)
		{
			b4=b4+1;
		}
		else if(b4==255)
		{
			b3=b3+1;
		}
		else if(b3==255&&b4==255)
		{
			b2=b2+1;
		}
		else if(b2==255&&b3==255&&b4==255)
		{
			b1=b1+1;
		}
		else if(b1==255&&b2==255&&b3==255&&b4==255)
		{
			cout<<"not possible";
		}
	}
	cout<<"end address:";
	cout<<b1<<"."<<b2<<"."<<b3<<"."<<b4<<endl;
	for(i=0;i<nos;i++)
	{
		alloted+=s[i];
	}
	cout<<"alloted:";
	cout<<alloted<<endl;
	balance = address-alloted;
	cout<<"balance:";
	cout<<balance<<endl;
	for(i=1;i<=nos;i++)
	{
		cout<<"subscriber"<<i<<":"<<endl;
		address1 = s[i-1];
		
		cidr = 32 - log2(address1);
		
		
		cout<<"starting address with cidr value:";
		cout<<a1<<"."<<a2<<"."<<a3<<"."<<a4<<"/"<<cidr<<endl;	
		cout<<"end address with cidr value:";
		count = i;
		for(i=1;i<address1;i++)
		{
			
	
		if(a4<255)
		{
			a4=a4+1;
		}
		else if(a4==255)
		{
			a3=a3+1;
		}
		else if(a3==255&&a4==255)
		{
			a2=a2+1;
		}
		else if(a2==255&&a3==255&&a4==255)
		{
			a1=a1+1;
		}
		else if(a1==255&&a2==255&&a3==255&&a4==255)
		{
			cout<<"not possible";
		}
	
	}
		cout<<a1<<"."<<a2<<"."<<a3<<"."<<a4<<"/"<<cidr<<endl;
		i = count;

}
			
		
	return 0;
}
