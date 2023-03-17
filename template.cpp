#include<iostream>
using namespace std;
template <class T>
class A
{
	public:
		int i=0;
		T add(T n1,T n2)
		{
			i=n1+n2;
			return i;
		}
};
int main()
{
	int n1,n2;
	float f1,f2;
	char c1,c2;
	cin>>n1>>n2>>f1>>f2>>c1>>c2;
	A <int>x;
	A <float>y;
	A <char>z;
	cout<<x.add(n1,n2);
	cout<<"\n"<<y.add(f1,f2);
	cout<<"\n"<<z.add(c1,c2);
}
