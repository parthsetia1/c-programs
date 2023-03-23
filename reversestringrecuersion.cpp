#include<iostream>
#include<string>
using namespace std;
void reversestring(string s)
{
	if(s.length()==0)
	{
		return;
	}
	string ros=s.substr(1);
	reversestring(ros);
	cout<<ros[0];
	return;
}
int main()
{
	string i;
	cin>>i;
	reversestring(i);
}
