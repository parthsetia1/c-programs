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
		cin>>ack;
		
		if(stricmp("recieved",ack)==0)
		{
			cout<<"\t\t recieved frame : "<<i<<endl;
			cout<<"ack received\n";
		}
		else if(stricmp("delayed",ack)==0)
		{
			cout<<"\t\t recieved frame : "<<i<<endl;
			cout<<"delayed ack\n";
			i=i-1;
		}
		else if(stricmp("timeout",ack)==0)
		{
			cout<<"\t\t recieved frame :--- "<<endl;
			cout<<"timeout\n";
			i=i-1;
		}
		else
		{
			cout<<"please give a valid ack";
			break;
		}
	}
}
int main()
{
	int n;
	cout<<"enter the number of frames:";
	cin>>n;
	cout<<"\n";
	cout<<"Sender\t\t\t\t\tReciever";
	send(n);
	
}
