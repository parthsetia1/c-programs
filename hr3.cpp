#include<iostream>
using namespace std;
int main()
{
    int n,a[100],i,temp,b,j;
    cin>>n;
    b=n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        for(j=i+1;j<n;j++)
        {
            if(temp==a[j])
            {
                continue;
            }
            else if(temp!=a[j])
            {
                temp=' ';
                n=n-1;
            }
        }
    }
    cout<<b-n;
    
}
