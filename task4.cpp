#include<iostream>
using namespace std;
void fib(int n)
{
	int i,arr[100]={0,1};
	cout<<arr[0]<<" "<<arr[1]<<" ";
//	for(i=0;i<n;i++)
//	{
//		if(i==0||i==1)
//		{
//			cout<<i<<" ";
//		}
//		else
//		{
//			count=(i-1)+(i-2);
//			cout<<count<<" ";
//		}
//	}
     for(i=2;i<n;i++)
     {
     	arr[i]=arr[i-1]+arr[i-2];
     	cout<<arr[i]<<" ";
	 }

}

int main()
{
	int n;
	cin>>n;
	fib(n);
}
