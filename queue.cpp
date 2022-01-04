//
//  Queue.cpp
//  Queue
//
//  Created by Janice on 28/11/20.
//  Copyright © 2020 Janice. All rights reserved.
//

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};


int main()
{
    int n,m,val,flag;
    Queue q1;
    cout<<"1. Insert in Queue \n2. Delete\n3. View the Top Element\n4. QUIT";
    flag = 1;
    while(flag)
    {
        cout<<"\nEnter the Desired Option : ";
        cin>>m;
        switch(m)
        {
            case 1:
                cout<<"Enter the number of values you want to insert : ";
                cin>>n;
                for (int i=1;i<=n;i++)
                {
                    cout<<"Enter Value : ";
                    cin>>val;
                    q1.enqueue(val);
                }
                break;
            case 2:
                val=q1.dequeue();
                cout<<"Element Deleted : "<<val;
                break;
            case 3:
                cout<<q1.showFront();
                break;
            case 4:
                flag=0;
                break;
            case 5:
                q1.display();
                break;
            case 6:
                cout<<q1.showRear();
                break;
        }
    }
}
