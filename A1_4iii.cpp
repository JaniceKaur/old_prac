#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],i,j,n;
    cout<<"Enter the order : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }

    cout<<endl<<"Matrix"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<"|";
        for(j=0;j<n;j++)
        {
            cout<<" "<< a[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    cout<<"Transpose Matrix";
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"|";
        for(j=0;j<n;j++)
        {
            cout<<" "<<b[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
    cout<<endl;
}