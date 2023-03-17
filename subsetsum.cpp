#include<iostream>
using namespace std;
int s[10] , x[10],d ;
void sumofsub ( int , int , int ) ;
int main ()
{
int n , sum = 0 ;
int i ;
cout<<"enter the number of elements";
cin>>n;
cout<<"enter the set";
for ( i = 1 ; i <= n ; i++ )
cin>>s[i];
cout<<"enter the value d";
cin>>d;
for ( i = 1 ; i <= n ; i++ )
sum = sum + s[i] ;
if ( sum < d || s[1] > d )
cout<<" \n No subset possible : ";
else
sumofsub ( 0 , 1 , sum ) ;
}
void sumofsub ( int m , int k , int r )
{
int i=1 ;
x[k] = 1 ;
if ( ( m + s[k] ) == d )
{
cout<<"Subset:";
for ( i = 1 ; i <= k ; i++ )
if ( x[i] == 1 )
cout<<"\t"<<s[i];
cout<<"\n";
}
else
if ( m + s[k] + s[k+1] <= d )
sumofsub ( m + s[k] , k + 1 , r - s[k] ) ;
if ( ( m + r - s[k] >= d ) && ( m + s[k+1] <=d ) )
{
x[k] = 0;
sumofsub ( m , k + 1 , r - s[k] ) ;
}
}
