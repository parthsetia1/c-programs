#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,w,i,j;
	char ack[100];
	cout<<"enter the number of frames:";
	cin>>n;
	cout<<"enter the window size:";
	cin>>w;
	cout<<"sender"<<"\t\t\t\t"<<"reciever"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i+w;j++)
		{
			cout<<"send frame: "<<i<<endl;
			
		
		
	
	cout<<"\t\t\t\t"<<"recieved frame:";
	cin>>ack;
	if(int(ack)=i)
	{
		cout<<"ack recieved\n";
		i=i+w;
	}
	else if(stricmp("---",ack)==0)
	{
		cout<<"timeout";
		break;
	}
}
}

	
}
