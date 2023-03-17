#include<iostream>
using namespace std;
class practice
{
	int f;
	void input()
	{
		cout<<"enter the number";
		cin>>f;
	};
	public:
		int factorial();
		int fibonacci();
		
		
};
int practice::factorial()
{
	input();
	if(f>=1)
	return f*factorial(f-1);
	else
	return 1;
	;
}
int practice::fibonacci()
{
	input();
	if(f == 0 || f == 1)
    return f;
    else
    return(fibonacci(f-1) + fibonacci(f-2));
}
int main()
{
	practice p;
	p.factorial();
	p.fibonacci();
	
}

