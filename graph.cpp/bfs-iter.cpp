#include<iostream>
#include<vector>

using namespace std;

vector<int>adj[55];

int  main(){
    int n,m;
    cin>>n>>m;

    int x,y;
    for (int i = 0; i < m; i++)
    {   
        cin>>x>>y;
       adj[x].push_back(y);
       adj[y].push_back(x); 
    }
    cout<<"adjacency list "<<endl;
    for (int i = 1; i < n+1; i++)
    {
        cout<<i<<"->";
       for(int x: adj[i]){
        cout<<x<<" ";
       }
       cout<<endl;
    }  
}