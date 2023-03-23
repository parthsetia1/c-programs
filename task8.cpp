#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
bool check(int a,int b,int c)
{
	bool tri=false;
	int x,y,z;
	x=max(a,max(b,c));
	if(x==a){
		y=b;
		z=c;
	}
	else if(x==b){
		y=a;
		z=c;
	}
	else if(x==c){
		y=b;
		z=a;
	}
	if(a*a==b*b+c*c)
	return true;
	else
	return false;
	
	
}
int main()
{
	int a,b,c;
	bool tri;
	cin>>a>>b>>c;
	tri=check(a,b,c);
	if(tri)
	{
		cout<<"yes they are triplet";
	}
	else
	cout<<"no they are not triplet";
}
