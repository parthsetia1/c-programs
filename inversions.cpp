#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,count;
	cin>>n;//n is the number of integer values.
	for(i=0;i<n;i++)
	{
		cin>>a[i];//input for array elements.
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    if(a[i]>a[j])
			{
			    count=count+1;	//it will give us the number of inversions.
			    cout<<a[i]<<' '<<a[j]<<endl;//this will print the inversion combos.
			}	
		}
	}
	cout<<count;//print the number of inversions.
}
