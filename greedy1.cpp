#include<iostream>
using namespace std;
struct knapsack
{
	int profit;
	int weight;
}k1[100];
int main()
{
     int n,W,i,w,a,max_profit;
	 cin>>n;
	 cin>>W;
	 for(i=0;i<n;i++)
	 {
	 	cin>>k1[i].profit;
	 	cin>>k1[i].weight;
	 }
	 w=0;
	 for(i=0;i<n;i++)
	 {
	 	if(w<W&&k1[i].weight<=W-w)
	 	{
	 		w+=k1[i].weight;
	 		cout<<k1[i].profit<<" "<<k1[i].weight<<endl;;
	 		max_profit+=k1[i].profit;
		 }
		 else if(w<W&&W-w<k1[i].weight)
		 {
		 	a=W-w;
		 	cout<<a*k1[i].profit/k1[i].weight<<" "<<k1[i].weight<<endl;
		 	max_profit+=a*k1[i].profit/k1[i].weight;
		 	w=W;
		 }
	 }
	 cout<<max_profit;
	 	
	 
}
