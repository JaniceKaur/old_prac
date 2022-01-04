#include<iostream>
using namespace std;
int main()
{
    int p;int q;
    cin>>p>>q;
    //Taking input of number of rows columns 
    int arr[p][q];
    //initializing array to 0
    memset(arr, 0, sizeof arr);
    int n;int i;
    cin>>n;
    //taking input of number of elements
    int sparse[n*3];
    //Taking sparse matrix input
    for(i = 0;i < n*3;i=i+3)
    {
        cin>>sparse[i]>>sparse[i+1]>>sparse[i+2];
    }
    //converting sparse form to matrix
    for(i = 0;i < n*3;i=i+3)
    {
        arr[sparse[i]][sparse[i+1]]=sparse[i+2];
    }
    int sr,sc;
    int count=1;
    cin>>sr;
    cin>>sc;
    int k=1;
    int l=0;
    while(count<=p*q)
    {
        //down
        int dir=1;
        if(l)
        {i=sr+1;}
        else
        {i=sr;}
        while(i<=sr+k)
        {
            //column is constant throughout this loop

            if(arr[i][sc]!=0)
            {
                if(sc>=q)
                {
                    break;
                }
                if(i>=p)
                {
                    break;
                }
                if(sc<0)
                {
                    break;
                }
                if(i<0)
                {
                    break;
                }
                cout<<i<<" "<<sc<<" "<<arr[i][sc]<<" "<<dir<<endl;
                arr[i][sc]=0;
            }
            i++;
            count++;
        }
        count=count-1;
        if (sr+k>=p)
        {
            sr=sr;
        }
        else
        {sr=sr+k;}
        //right 

        dir=2;
        i=sc;
        while(i<=sc+k)
        {

            if(arr[sr][i]!=0)
            {
                if(sr>=p)
                {
                    break;
                }
                if(i>=q)
                {
                    break;
                }
                if(sr<0)
                {
                    break;
                }
                if(i<0)
                {
                    break;
                }
                cout<<sr<<" "<<i<<" "<<arr[sr][i]<<" "<<dir<<endl;
                arr[sr][i]=0;
            }
            i++;
            count++;
        }
        count=count-1;
        if (sc+k>=q)
        {
            sc =sc;
        }
        else
        {sc=sc+k;} //current column is updated

        k++;

        //upwards

        dir=3;
        i=sr;
        while(i>=sr-k)
        {
            if(arr[i][sc]!=0)
            {
                if(sc>=q)
                {
                    break;
                }
                if(i>=p)
                {
                    break;
                }
                if(sc<0)
                {
                    break;
                }
                if(i<0)
                {
                    break;
                }
                cout<<i<<" "<<sc<<" "<<arr[i][sc]<<" "<<dir<<endl;
                arr[i][sc]=0;
            }
            i--;
            count++;
        }
        count=count-1;
        if (sr-k<0)
        {sr=sr;}
        else
        {sr=sr-k;}

        //left

        dir=4;
        i=sc;
        while(i>=sc-k)
        {
            l=1;
            if(arr[sr][i]!=0)
            {
                if(sr>=p)
                {
                    break;
                }
                if(i>=q)
                {
                    break;
                }
                if(sr<0)
                {
                    break;
                }
                if(i<0)
                {
                    break;
                }
                cout<<sr<<" "<<i<<" "<<arr[sr][i]<<" "<<dir<<endl;
                arr[sr][i]=0;
            }
            i--;
            count++;
        }
        count=count-1;
        if (sc-k<0)
        {sc=sc;}
        else
        {sc=sc-k;}

        k++;
    }
    return 0;
}
