#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,w,i,j,k;
	char ack[100];
	cout<<"enter the number of frames:";
	cin>>n;
	cout<<"enter the window size:";
	cin>>w;
	cout<<"sender"<<"\t\t\t\t"<<"reciever"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<i+w;j++)
		{
			if(j<=n)
			{
			
			cout<<"send frame: "<<j<<endl;
			
		
		
}
else
exit;
}
	for(k=i;k<i+w;k++)
	{
	if(k<=n)
	{
	
	cout<<"\t\t\t\t"<<"recieved frame:";
	cin>>ack;
	if(int(ack)=j)
	{
		cout<<"ack recieved\n";
		
	
}
}
else
exit;
}



i=i+w-1;
}

	
}
