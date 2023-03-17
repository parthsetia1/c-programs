
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100],result[100],rec[100],result2[100];
    int i,j,n,m;
	cout<<"enter the string:";
	gets(str);
	//sender site
	n=strlen(str);
	result[0]='$';
	i=1;
	
		for(j=0;j<n;j++)
		{
			if(str[j]=='$'||str[j]=='@')
			{
				result[i]='@';
				result[i+1]=str[j];
				i=i+2;
			}
			else
			{
				result[i]=str[j];
				i=i+1;
			}
		}
	
	strcat(result,"$");
	cout<<"the string that will send is:";
	cout<<result;
	//receiver side
	cout<<"\nenter the recieved data:";
	gets(rec);
	m=strlen(rec);
	i=1;
	for(j=1;j<m;j++)
	{
		if(rec[j]=='@')
		{
			result2[i]=rec[j+1];
			i=i+1;
			j=j+1;
		}
		else if(rec[j]=='$')
		{
			break;
		}
		else
		{
			result2[i]=rec[j];
			i=i+1;
		}
	}
	cout<<"\nthe received data is:";
	cout<<result2;
}
