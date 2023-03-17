#include<iostream>
using namespace std;
int main()
{
    int a[1000],i,n,j,r[2],count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                r[i]=j-i;
                count=count+1;;
            }
            
        }
    }
   
    
    for(i=0;i<count;i++)
    {
        cout<<r[i];
    }
}
