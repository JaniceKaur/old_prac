#include<iostream>
using namespace std;
void insertion_sort(int ar[],int n)
{
    int i,value,hole;
    for(i=1;i<=n-1;i++)
    {
        value=ar[i];
        hole=i;
        while(hole>0 && ar[hole-1]>value)
        {
            ar[hole]=ar[hole-1];
            hole--;
        }
        ar[hole]=value;
    }
}
int main()
{
    int ar[100];
    int n,i,value,hole;
    cout<<"Enter n"<<endl;
    cin>>n;
    cout<<"Enter Array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    insertion_sort(ar,n);
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}
