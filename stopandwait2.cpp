#include<iostream>
#include<string.h>
using namespace std;
//sender side
void send(int n)
{
	int i=1;
	char ack[100];
	for(;i<=n;i++)
	{
		cout<<"send frame "<<i<<endl;
		//cin>>ack;
		
	     if(i==7)
		{
			cout<<"\t\t recieved frame : "<<i<<endl;
			cout<<"delayed ack\n";
			i=i-1;
		}
		else if(i=3)
		{
			cout<<"\t\t recieved frame :--- "<<endl;
			cout<<"timeout\n";
			i=i-1;
		}
		else{
		
			cout<<"\t\t recieved frame : "<<i<<endl;
			cout<<"ack received\n";
	    }
		
		
		
	}
}
int main()
{
	int n;
	cout<<"enter the number of frames:";
	cin>>n;
	send(n);
	
}
