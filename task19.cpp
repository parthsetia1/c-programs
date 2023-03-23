#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	int a[n],count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int diff1,diff2;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=i;j<n;j++)
		{
			diff2=a[j+1]-a[j];
			if(diff2==diff1)
			{
				count++;
			}
			else
			{
				count=0;
				break;
			}
			diff1=diff2;
		}
	}
	cout<<count<<endl;
	return 0;
}
