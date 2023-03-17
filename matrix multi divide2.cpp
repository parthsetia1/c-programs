#include<iostream>
using namespace std;
int matrix(int n)
   {
	if(n>2)
	{
		return matrix(n/2);
	}
}
int main()
{
    int n,i,j,a[100][100],b[100][100],c[100][100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>b[i][j];
		}
	}
	
    if(n=2)
	{
	    for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				c[i][j]+=a[i][j]*b[j][i];
			}
			}	
	}
	
    
     for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<c[i][j]<<endl;
		}
		
}
}
