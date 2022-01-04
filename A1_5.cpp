#include<iostream>
using namespace std;

int main()
{
    int i, beg,end,mid,n,val;
    int arr[100];

    cout<<"Enter Number of Elements in n : ";
    cin>>n;

    cout<<"Enter the Elements "<<endl;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value you want to Find : ";
    cin>>val;

    beg=1;
    end=n;
    mid=(beg+end)/2;

    while(mid!=val | beg<end)
    {
        if(arr[mid] < val)
	   {
		beg = mid + 1;
	   }
	   else if(arr[mid] == val)
	    {
		    cout<<val<<" found in the array at the location "<<mid<<"\n"; 
            break; 
        } 
        else 
        { 
                end = mid - 1; 
        } 
           mid = (beg + end)/2; 
        } 
        
    if(beg > end)
	{
	   cout<<val<<" not found in the array";
	}
}