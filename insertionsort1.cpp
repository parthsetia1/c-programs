#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
	int i,j,swap;
	for(i=1;i<n;i++)
	{
		for(j=i;j>=0;j--)
		{
		    
			if(arr[j-1]>arr[j])
			{
				swap=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=swap;	
				
			}
		}
		
		
	}
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){

    int n;
    cout<<"enter number of elements in an array : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    display(arr,n);
    insertion_sort(arr,n);
    cout<<"\nafter sorting "<<endl;
    display(arr,n);

}

