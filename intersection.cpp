#include<iostream>
using namespace std;
struct road
{
	int x1;
	int y1;
	int x2;
	int y2;
	
}r[10];

int main()
{
	int i;
	for(i=0;i<10;i++)//input for end points.
	{
		cin>>r[i].x1;
		cin>>r[i].y1;
		cin>>r[i].x2;
		cin>>r[i].y2;
	}
	
}
