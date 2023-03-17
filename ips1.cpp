#include<iostream>
using namespace std;
template <class T>
class marks
{
	public:
		int sum;
		int add(T n1,T n2)
		{
			sum=n1+n2;
			return sum;
		}
};
int main()
{
	int m1,m2;
	float o1,o2;
	cin>>m1>>m2>>o1>>o2;
	marks<int> x;
	marks<float> y;
	cout<<x.add(m1,m2)<<endl;
	cout<<y.add(o1,o2)<<endl;
	
}
