//  BalancedParantheses.cpp
//
//  Application of stacks
//
//  Created by Janice on 11/09/20.
//  Copyright © 2020 Janice. All rights reserved.
//
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
stack <char> s;
int main()
{
    char exp[100];
    bool b;
    cout<<"Enter The Expression : ";
    cin>>exp;
    cout<<endl;
    int n;
    n=strlen(exp);
    for(int i=0;i<n;i++)
    {
        if (exp[i]=='{' || exp[i]=='(' || exp[i]=='[')
            s.push(exp[i]);
        else if (exp[i]=='}' || exp[i]==')' || exp[i]==']')
        {
            if (s.empty())
            {
                b=true;
                break;
            }    
            else if (exp[i]==')'&& s.top()=='(')
                s.pop();
            else if (exp[i]=='}'&& s.top()=='{')
                s.pop();
            else if (exp[i]==']'&& s.top()=='[')
                s.pop();
        }
    }
    if (s.empty()&&!b)
        cout<<"Balanced";
    else
        cout<<"not Balanced";
    
}

