#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Ll
{
    Node *head;
    public:
    Ll()
    {
        head = NULL;
    }
    void ins_b(int n);
    void printlist();
};

void Ll::ins_b(int n)
{
    Node *temp = new Node;
    temp->data = n;
    temp -> next = head;
    head = temp;
}

void Ll :: printlist()
{
    Node * ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
    }
}

int main()
{
    int n,val;
    Ll l1;
    cout<<"Number of nodes : ";
    cin>>n;
    for(int i =1 ;i<=n;i++)
    {
        cout<<"Enter value for node "<<i<<" : ";
        cin>>val;
        l1.ins_b(val);
        l1.printlist();
    }
}