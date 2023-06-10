#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int>adj[55];
bool vis[55];

int  main(){
    for (int i = 0; i < 55; i++)
    {
        vis[i]=0;
    }
    

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
    queue<int> q;
    q.push(1); 
    vis[1]=true;
    
    while(!q.empty()){
        int node=q.front();

        q.pop();
        cout<<node<<endl;

        vector<int> :: iterator it;
        for(it=adj[node].begin();it!=adj[node].end();it++){
            if(!vis[*it]){
                vis[*it]=1;
                q.push(*it); 
            }
        }
    }

}