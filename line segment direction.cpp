#include<iostream>
using namespace std;
int main()
{
	int x1,y1,x2,y2,x0,y0,cross;
	cin>>x0>>y0>>x1>>y1>>x2>>y2;
	cross=(x1-x0)*(y2-y0)-(x2-x0)*(y1-y0);
	if(cross>0)
	{
		cout<<"point p1 is clockwise from p2";
	}
	else if(cross<0)
	cout<<"point p1 is anticlockwise from p2";
	else if(cross==0)
	cout<<"point p1 and p2 are collinear";
}
