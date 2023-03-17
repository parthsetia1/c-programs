#include<iostream>
#include<algorithm>
using namespace std;
struct item{
	int value,weight;
};
bool cmp(struct item a,struct item b)
{
	double r1=(double)a.value/(double)a.weight;
	double r2=(double)b.value/(double)b.weight;
	return r1>r2;
}
double fractionalknapsack(int w,struct item arr[],int n)
{
	sort(arr,arr+n,cmp);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i].value<<" "<<arr[i].weight<<":"<<((double)arr[i].value/arr[i].weight)<<endl;
	}
	int curweight=0;
	double finalvalue=0.0;
	for(int i=0;i<n;i++){
		if(curweight+arr[i].weight<=w)
		{
			curweight+=arr[i].weight;
			finalvalue+=arr[i].value;
		}
		else{
			int remain=w-curweight;
			finalvalue+=arr[i].value*((double)remain/(double)arr[i].weight);
			break;
		}
	}
	return finalvalue;
}
int main()
{
	int w=50;
	item arr[]={{60,10},{100,20},{120,30}};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"maximum value we can obtain="<<fractionalknapsack(w,arr,n);
	return 0;
}
