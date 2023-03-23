#include<iostream>
using namespace std;
int main()
{
	int n,m,target;
	bool found=false;
	cin>>n>>m>>target;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int r=0;
	int c=m-1;
	while(r<n&&c>=0)
	{
		if(a[r][c]==target)
		{
			found=true;
		}
		else if(a[r][c]<target)
		{
			r++;
		}
		else{
			c--;
		}
	}
	if(found)
	{
		cout<<"found";
	}
	else{
		cout<<"not found";
	}
}
