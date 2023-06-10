#include<iostream>
#include<vector>

using namespace std;
vector<int>adj[55];
bool vis[55];

void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";

    vector<int>:: iterator it;
     for(it=adj[node].begin();it!=adj[node].end();it++){
            if(vis[*it]);
            else{
                dfs(*it);
            }
            }
}
int main(){
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
    dfs(1);
}