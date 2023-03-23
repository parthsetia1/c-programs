#include<iostream>
using namespace std;

int main(){
	int cases;
	int a,b,j;
	cin>>cases;
	for(int i=0;i<cases;i++)
	{
	    cin>>a>>b;
	    if(a==b)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else{
	        for(j=1;j<1001;j++)
	        {
	            int check1,check2,check3,check4;
	            check1=a+j;
	            check2=b-j;
	            check3=a-j;
	            check4=b+j;
	            if(check1==check2)
	            {
	                cout<<"Yes"<<endl;
	                break;
	            }
	            else if(check3==check4)
	            {
	                cout<<"Yes"<<endl;
	                break;
	            }
	            else{
	                continue;
	            }
	        }
	        if(j==1000)
	        {
	            cout<<"No"<<endl;
	        }
	    }
	}
}

