#include<iostream>
#include<string>
using namespace std;
void replacepi(string s)
{
	if(s.length()==0)
	{
		return;
	}
	else if(s[0]=='p'&&s[1]=='i')
	{
		cout<<"3.14";
		replacepi(s.substr(2));
		return;
	}
	else{
		cout<<s[0];
		replacepi(s.substr(1));
		return;
	}
}
int main(){
	replacepi("pipxxppipppi");
}
