#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *nxt;
}*head;
void createnode(int n)
{
    int data;
    Node *newnode,*temp;
    Node *head = new Node;
    if(head==NULL)
    {
        cout<<"Memory Cannot be Allocated"<<endl;
    }
    else
    {
        cout<<"Enter the data entry for 1st Node : ";
        cin>>data;
        head->data=data;
        head->nxt=NULL;
        temp=head;
        for(int i=2;i<=n;i++)
        {
            Node *newnode=new Node;
            if(newnode==NULL)
            {
                cout<<"Memory cannot be allocated";
            }
            else
            {
                cout<<"Enter the data entry for Node "<<i<<" : ";
                cin>>data;
                newnode->data=data;
                newnode->nxt=NULL;

            }
        }
    }
}
void display()
  {
    Node *temp=new Node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->nxt;
    }
  } 


void insert_start(int value)
  {
    Node *temp=new Node;
    temp->data=value;
    temp->nxt=head;
    head=temp;
  }

int main()
{
    int n;
    cout<<"Enter number of nodes : ";
    cin>>n;
    createnode(n);
    display();
}