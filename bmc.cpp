#include<bits/stdc++.h>
using namespace std;
void  processArray(vector<int> &b)
{
	int count;
	for(int i=0;i<b.size();i++)
	{
		if(b[i]<100)
		{
			for(int j=i+1;j<b.size();j++)
			{
				if(b[j]<100)
				{
					continue;
				}
				else{
					vector<int>::iterator it1,it2;
					it1=b.begin()+i;
					it2=b.begin()+(j);
					b.erase(it1,it2);
					break;
				}
			}
		}
	
	}
		for(int i=0;i<b.size();i++)
		{
			cout<<b[i]<<endl;
		}
	
}
int main()
{
	vector<int> b;
	int a;
	do{
		cin>>a;
		if(a>=0)
		{
		    b.push_back(a);	
		}
		
	}while(a>=0);
	processArray(b);
	
}
