#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
    {
        for (j = 0; j < n-i-1; j++)  
        {
            if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
        }
    }
}  

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
    cout<<"Unsorted array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr,n);
    cout<<endl<<"Sorted array : "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}