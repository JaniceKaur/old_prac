#include<iostream>
using namespace std;
int create(int *arr)
{
    int n,i;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return n;
}
/* void display(int arr[],int n)
{
    int i;
    cout<<"Displaying Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
} */
int duplicate(int *arr,int *m)
{
    int i,j,k;
    int n=*m;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    *m=n;
    return *m;
}
int main()
{
    int arr[100],n;
    n=create(arr);
    int i;
    
    
    cout<<"Displaying Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    n=duplicate(arr,&n);
    
    cout<<"Duplicate items removed "<<endl;
    
    cout<<"Displaying Array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}