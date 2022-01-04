//If the array is missing a single number
#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the elements : "<<endl;
    for (i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]-arr[i]!=1)
        {
            cout<<"Missing number is : ";
            cout<<arr[i]+1<<endl;
        }
    }
}