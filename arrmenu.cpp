#include<iostream>
using namespace std;

int create(int *arr)
{
    int n,i;
    cout<<"Enter the number of elements : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return n;
}
void search(int *arr,int *p)
{
    int val,i,flag=0,n=*p;
    cout<<"Enter the value you want to search : ";
    cin>>val;
    for(i=0;i<n;i++)
    {
        if (arr[i]==val)
        {
            flag=1;
            break;
        }
        else
        {
            continue;
        }
    }
    if(flag)
    {
        cout<<"Index :"<<i;
    }
    else
    {
        cout<<"Not Found";
    }
}

void insert(int *arr,int *m)
{
    int i,a,ch;
    cout<<"1. Insertion in between Array"<<endl;
    cout<<"2. Insertion at the end of Array"<<endl;
    cout<<"Which option would you prefer? ";
    cin>>ch;
    switch(ch)
    {
        case 1:
            {   
                int x,y;
                cout<<"Enter the index where new element needs to be added : ";
                cin>>x;
                cout<<"Enter the value to be inserted : ";
                cin>>y;
                a=*m;
                a=a+1;
                *m=a;
                for(i=a;i>x;i--)
                {
                    int temp = arr[i];
                    arr[i]=arr[i-1];
                    arr[i-1]=temp;
                }
                arr[x]=y;
            }
            break;

        case 2:
            {
                int y;
                cout<<"Enter the value to be inserted";
                cin>>y;
                a=*m;
                a=a+1;
                *m=a;
                arr[a]=y;
            }
            break;

    }

}
void del_a(int *arr,int *n)
{
    int a,i,x;
    cout<<"Enter the index of element to be deleted"<<endl;
    cin>>x;
    for(i=x;i<=*n;i++)
    {
        int temp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    *n=*n-1;
}

void display(int *arr,int *n)
{
    cout<<"Displaying Array : ";
    int i;
    for(i=0;i<*n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100],i,n,val,m,flag;
    flag=1;
    cout<<"1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.SEARCH\n6.EXIT"<<endl;
    while(flag)
    {
        cout<<"\nEnter the Desired option : ";
        cin>>m;
        switch(m)
        {
            case 1:
            {
                n=create(arr);
                break;
            }
            case 2:
            {
                display(arr,&n);
                break;
            }
            case 3:
            {
                insert(arr,&n);
                break;
            }
            case 4:
            {
                del_a(arr,&n);
                break;
            }
            case 5:
            {
                search(arr,&n);
                break;
            }
            case 6:
            {
                flag=0;
                break;
            }
            default:
            cout<<"Invalid Choice"<<endl;
            break;
        }
    }
}