#include<iostream>
using namespace std;
int ispower(int n)
{
	return !(n & n-1);
}
int main()
{
	cout<<ispower(14);
}
