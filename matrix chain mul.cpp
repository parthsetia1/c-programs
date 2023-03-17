#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
	int n,i,a[100],b[100][100],j,k,l;
	cout<<"enter double the number of matrices";
	cin>>n;// n means the double the number of matrices
	cout<<"enter the dimensions of each matrix \n";
	for(i=1;i<=n;i++)
	{
		
		cin>>a[i];//input for dimensions of matrices
	}
	for(i=1;i<=n-1;i++)
	{
		b[i][i]=0;// initializing a matrix
	}
	for(k=1;k<=n;k++)
	{
		for(i=0;i<=n-k-1;i++)
		{
			j=i+k;
			b[i][j]=INT_MAX;
			for(l=i;l<=j-1;l++)
			{
				b[i][j]=min(b[i][j],b[i][l]+b[l+1][j]+a[i]*a[l+1]*a[j+1]);
			}
		}
		
	}
	cout<<"ouput matrix is: \n";
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=n/2;j++)
		{
			
			cout<<b[i][j]<<"\t";// output will a matrix showing least multiplies.
		}
		cout<<endl;
	}
}
