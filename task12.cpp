#include<iostream>
using namespace std;
int reverse(int n)
{
	int ans=0;
	int lastdigit=0;
	while(n>0)
	{
		lastdigit=n%10;
		n=n/10;
		ans=ans*10+lastdigit;
	}
	return ans;
}
int addbin(int a,int b)
{
	int ans=0;
	int prevcarry=0;
	while(a>0&&b>0)
	{
		if(a%2==0&&b%2==0)
		{
			if(prevcarry==0)
			{
				ans=ans*10+0;
				prevcarry=0;
			}
			else
			{
				ans=ans*10+1;
				prevcarry=0;
			}
		}
		else if((a%2==1&&b%2==0)||(a%2==0&&b%2==1))
		{
			if(prevcarry==0)
			{
				ans=ans*10+1;
				prevcarry=0;
			}
			else
			{
				ans=ans*10+0;
				prevcarry=1;
			}
		}
		else
		{
			if(prevcarry==0)
			{
				ans=ans*10+0;
				prevcarry=1;
			}
			else
			{
				ans=ans*10+1;
				prevcarry=1;
			}
		}
		
	}
	return reverse(ans);
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<addbin(a,b)<<endl;
}
