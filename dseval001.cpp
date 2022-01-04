#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

class Stack
{
    Node *top;
    public:
    Stack()
    {
        top = NULL;
    }
    void push(int n);
    int pop();
    int peek();
    int isEmpty();
    void display();
};
void Stack::display()
{
    Node *ptr=top;
    if(this->isEmpty())
    return;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void Stack::push(int n)
{
    Node *temp = new Node;
    temp->data = n;
    temp -> next = top;
    top = temp;
}
int Stack::isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    } 
}
int Stack::pop()
{
    if (this->isEmpty())
    {
        cout<<"EMPTY LIST"<<endl;
        return 0;
    }
    Node *temp=top;
    int x=top->data;
    top=top->next;
    delete temp;
    temp->next=NULL;
    temp=NULL;
    return x;
}
int Stack::peek()
{
    if (this->isEmpty())
    {
        return 0;
    }
    return top->data;
}

class Queue
{
    public:
    Node *front;
    Node *rear;
    Queue()
    {
        front=NULL;
        rear=NULL;
    }
    
    bool isEmpty();
    bool inc();
    void enqueue(int n);
    int dequeue();
    int showFront();
    int showRear();
    void display();
};

bool Queue::isEmpty()
{
    if(front == NULL && rear == NULL)
    return true;
    else 
    return false;
}
void Queue::enqueue(int val)
{
    Node *ptr = new Node;
    ptr->data=val;
    ptr->next=NULL;
    if(front==NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->next=ptr;
        rear=ptr;
    }
}
int Queue::dequeue()
{
    if(this->isEmpty())
    return 0;
    
    int val=front->data;
    if(front==rear)
    {
        delete(front);
        front=rear=NULL;
    }
    else
    {
        Node *ptr=front;
        front=front->next;
        delete(ptr);
    }
    return val;
}
int Queue::showFront()
{
    if(this->isEmpty())
    return 0;
    else
    return front->data;
}
int Queue::showRear()
{
    if(this->isEmpty())
    return 0;
    else
    return rear->data;
}
void Queue::display()
{
    if (this->isEmpty())
    return ;
    else
    {
        Node *ptr = front;
        while( ptr !=NULL)
        {
            cout<<ptr->data<<" ";
            ptr= ptr->next;
        }
    }
}
bool Queue::inc()
{ 
    if (front == NULL)
        return true;
 
    for (Node *t=front; t->next != NULL; t=t->next)
    {
        if (t->data > t->next->data)
        return false;
    }
    return true;
}
int main()
{
    int n,i;
    Stack s1;
    Queue q1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(q1.isEmpty() && s1.isEmpty())
    {
        q1.enqueue(arr[0]);
    }
    q1.display();
    cout<<endl;
    s1.display();
    for(i=1;i<n;i++)
    {
        
        if(arr[i]>=q1.showRear())
        {
            q1.enqueue(arr[i]);
        }
        else if (s1.isEmpty() || arr[i]<=s1.peek())
        {
            s1.push(arr[i]);
        }
        else
        {
            while(!s1.isEmpty())
            {
                // i. pop all elements from S and enqueue in Q
                if(s1.peek()<q1.showFront())
                {
                    q1.enqueue(s1.pop());
                }
                else if (s1.peek()>q1.showRear() && q1.inc())
                {
                    q1.enqueue(s1.pop());
                }
                else if(s1.peek()==q1.showRear())
                {
                    q1.enqueue(s1.pop());
                }
                else
                {
                    q1.enqueue(q1.dequeue());
                }
            }
            // ii. DeQ from Q and EnQ in Q till Q.front is less than x 
            while(q1.showFront()<arr[i]) 
            {
                q1.enqueue(q1.dequeue());
            }
            // iii. Dequeue from Q push in stack
            s1.push(q1.dequeue());
            // iv. Push x in S
            s1.push(arr[i]);
            // v. DeQ from Q and EnQ in Q till Q.Front > Q.Rear
            while(q1.showFront()>=q1.showRear())
            {
                q1.enqueue(q1.dequeue());
            }
        }
        
        q1.display();
        cout<<endl;
        s1.display();
        cout<<endl;
    }
}