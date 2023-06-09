#include<iostream>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int adj[n+1][m+1];

    
    for (int i = 0; i < m; i++) 
    {
        int x,y;
        cin>>x>>y;
        adj[x][y]=1;
        adj[y][x]=1;
    }
    cout<<"matrix of given graph"<<endl;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1 ; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}