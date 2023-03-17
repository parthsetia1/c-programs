#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char send[100][100],sum[100],recieved[100][100],complement[100],carry;
	int n,m,i,j,k;
	cout<<"enter the size of data:";
	cin>>m;
	cout<<"enter how many data to be send:";
	cin>>n;
	cout<<"enter the data to be send:";
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		    cin>>send[i][j];
		}
	}
	
		for(j=0;j<m;j++)
		{
			sum[j]=send[0][j];
		}
	
	for(i=1;i<n;i++)
	{
		for(j=m-1;j>=0;j--)
		{
			k=m+1;
			if(send[i][j]=='0'&& sum[j]=='0' && carry=='0')
			{
				sum[k]='0';
				carry='0';
			}
			else if(send[i][j]=='1'&& sum[j]=='0' && carry=='0')
			{
				sum[k]='1';
				carry='0';
			}
			else if(send[i][j]=='1'&& sum[j]=='1' && carry=='0')
			{
				sum[k]='0';
				carry='1';
			}
			else if(send[i][j]=='0'&& sum[j]=='1' && carry=='0')
			{
				sum[k]='1';
				carry='0';
			}
			else if(send[0][j]=='0'&& sum[j]=='0' && carry=='1')
			{
				sum[k]='1';
				carry='0';
			}
			else if(send[0][j]=='1'&& sum[j]=='0' && carry=='1')
			{
				sum[k]='0';
				carry='1';
			}
			else if(send[0][j]=='1'&& sum[j]=='1' && carry=='1')
			{
				sum[k]='1';
				carry='1';
			}
			else if(send[0][j]=='0'&& sum[j]=='1' && carry=='1')
			{
				sum[k]='0';
				carry='1';
			}
			k=k-1;
		}
		if(strlen(sum)==m+1)
		{
			if(sum[0]=='1')
			{
				sum[0]='0';
				for(i=m+1;i>0;i--)
				{
					if(sum[i]=='0'&& carry=='0')
					{
						sum[i]='0';
						carry='0';
					}
					else if(sum[i]=='1'&& carry=='0')
					{
						sum[i]='1';
						carry='0';
					}
					else if(sum[i]=='1'&& carry=='1')
					{
						sum[i]='1';
						carry='1';
					}
					else if(sum[i]=='0'&& carry=='1')
					{
						sum[i]='1';
						carry='0';
					}
				}
				
			}
		}
	}
	cout<<"checksum:";
	
	
		for(j=0;j<m;j++)
		{
		    cout<<sum[j];
		}
	cout<<"enter the recieved data:";
		for(i=0;i<n+1;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>recieved[i][j];
			}
		}
		cout<<" error";
	
}
