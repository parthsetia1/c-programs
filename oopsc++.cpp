#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int age;
		int gender;
		student(string s,int a,int b)
		{
			name=s;
			age=a;
			gender=b;
		}
		void printinfo()
		{
			cout<<name<<" "<<age<<" "<<gender<<endl;
		}
};
int main()
{
	student a("parth",19,0);
	a.printinfo();
	student c=a;
	c.printinfo();
}
