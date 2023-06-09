#include<iostream>
#include<vector>

using namespace std;
vector<int> adj[55];
int main(){
    int n,m;
    cin>>n>>m;

    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    cout<<"adjacency list is "<<endl;

    for (int i = 1; i < n+1; i++)
    {
        cout<<i<<"->";
        // for ( int u:adj[i])
        // {
        //     cout<<u<<" ";
        // }
        vector<int> :: iterator it;
        for(it=adj[i].begin(); it!=adj[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;  
}