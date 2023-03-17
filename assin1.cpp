#include<iostream>
using namespace std;
class B
{
	public:
		float a;
		virtual void display()
		{
			cout<<"base"<<endl<<"a="<<a<<endl;
		}
};
class D:public B
{
	public:
		float b;
		void display()
		{
			cout<<"base"<<endl<<"a="<<a<<endl<<"b="<<b<<endl;
		}
};
int main()
{
	B b;
	B *ptr;
	ptr=&b;
	ptr->a=20.5;
	ptr->display();
	D d;
	ptr=&d;
	d.b=30.98;
	ptr->display();
}
