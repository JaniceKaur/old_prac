#include<iostream>
using namespace std;

class Node
{
    public:
    Node* next;
    int data;
}

class cll
{
    Node* last;
    public:
    cll()
    {
        last=NULL;
    }
    void ins_b(int val);
}

void cll::ins_b(int val)
{
    Node *temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(last == NULL)//if we have an empty list
    {
        last=temp;//we assign this to last as only one node exists
        last->next=temp;//we make it point to itself
        return;
    }
    //case for existing list
    //last's next node is first node, here we make first node second
    temp->next=last->next;
    //here we make last->next point to first node
    last->next=temp;
}

void cll::ins_e(int val)
{
    Node *temp=new Node;
    temp->data=val;
    temp->next=NULL;
    if(last == NULL)//if we have an empty list
    {
        last=temp;//we assign this to last as only one node exists
        last->next=temp;//we make it point to itself
        return;
    }
    //case for existing list
    temp->next=last->next;//storing address of first nose in temp->next 
    last->next=temp;//earlier wala last new ko point karega
    last = temp;//last ko temp ko assign karte hain
}




