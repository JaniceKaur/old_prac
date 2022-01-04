#include<iostream>
using namespace std;
int main()
{
    int i,j,b[100],arr[100],n;
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Enter values :"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying values :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(i=0,j=n-1;i<n,j>=0;i++,j--)
    {
            b[j]=arr[i];
    }
    cout<<"Displaying reversed values :"<<endl;
    for(i=0;i<n;i++)
    {
        arr[i]=b[i];
        cout<<arr[i]<<endl;
    }
}