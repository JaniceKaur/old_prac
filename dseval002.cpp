#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int arr[1000][1000],u[1000][1000],r[1000][1000],d[1000][100],l[1000][1000],visited[1000][1000];
stack <int> s;
void print_stack(stack <int> st);
void pathfinder(int row,int column,int i,int j,stack <int> s);
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    arr[m][n];
    memset(visited,0,sizeof(visited[0][0]) * m * n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j]>>u[i][j]>>r[i][j]>>d[i][j]>>l[i][j];
        }
    }
    pathfinder(m,n,0,0,s);
}
void print_stack(stack <int> st)
{
    
    vector <int> g1;
    while(!st.empty())
    {
        g1.push_back(st.top());
        st.pop();
    }
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
        cout << *ir << " "; 
}
void pathfinder(int row,int column,int i,int j,stack <int> s)
{
    if(i>=row || i<0 || j>=column || j<0)
    return;
    if(visited[i][j])
    return;
    if (arr[i][j]==arr[row-1][column-1])
    {
        s.push(arr[i][j]);
        print_stack(s);
        return;
    }
    int flag=0;
    if(l[i][j]||r[i][j]||u[i][j]||d[i][j])
    {
        s.push(arr[i][j]);
    }
    if(l[i][j])
    {
        visited[i][j]=1;
        pathfinder(row,column,i,j-1,s);
        flag=1;
    }
    if(r[i][j])
    {
        visited[i][j]=1;
        pathfinder(row,column,i,j+1,s);
        flag=1;
    }
    if(d[i][j])
    {

        visited[i][j]=1;
        pathfinder(row,column,i+1,j,s);
        flag=1;
    }
    if(u[i][j])
    {
        visited[i][j]=1;
        pathfinder(row,column,i-1,j,s);
        flag=1;
    }
    if(flag==0)
    {
        return;
    }
    
}