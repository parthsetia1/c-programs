#include<iostream>
using namespace std;
class A
{
   public:
   int id;
   char gender;
   char name[100];
   void input()
   {
       cin>>id>>gender>>name;
   }
   
};
class B:public A
{
    public:
    char department[100],des[100];
    int bp;
    void input1()
    {
        cin>>department>>des>>bp;
    }
};
class C:public B
{
    public:
    int gp,np;
    void calculate()
    {
        gp=bp+(10*bp/100)+(1*bp/4);
        np=gp-(14*bp/100);
    }
};
class D:public C
{
	public:
    void display()
    {
        cout<<id<<"\t"<<name<<"\t"<<bp<<"\t"<<gp<<"\t"<<np<<"\t"<<endl;
    }
};
int main()
{
    int n,i;
    cin>>n;
    D x;
    for(i=1;i<=n;i++)
    {
       x.display();
    }
}
