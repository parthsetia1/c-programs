#include<iostream>
using namespace std;
 
// function to find the maximum no.
// in a given array.
int DAC_Max(int arr[], int index, int l)
{
    int max;
    if(index >= l - 2)
    {
        if(arr[index] > arr[index + 1])
          return arr[index];
        else
          return arr[index + 1];
    } 
    max = DAC_Max(arr, index + 1, l);   
    if(arr[index] > max)
       return arr[index];
    else
       return max;
}
 
// Function to find the minimum no.
// in a given array
int DAC_Min(int arr[], int index, int l)
{
    int min;
    if(index >= l - 2)
    {
        if(arr[index] < arr[index + 1])
          return arr[index];
        else
          return arr[index + 1];
    }
     
    min = DAC_Min(arr, index + 1, l);  
    if(arr[index] < min)
       return arr[index];
    else
       return min;
}
 
// after that we will write the main function
int main()
{
    int n,arr[100],i;
    cout<<"enter the size of the array";
    cin>>n;
    cout<<"enter the elements of the array";
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
    int max, min;
    max = DAC_Max(arr, 0, n);
    min = DAC_Min(arr, 0, n);
    cout<<"the product of minimum and maximum elements will be:";
    cout<<max*min;// this will display the product of min and max elements
    return 0;
}
