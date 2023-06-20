#include<bits/stdc++.h>
using namespace std;

bool detect(int src, vector<int> adj[], int vis[]){
    vis[src]=1;
    queue<pair<int, int>> q;
    q.push({src, -1});

    while(!q.empty()){
        int node=q.front().first;
        int parent= q.front().second;
        q.pop();

        for(auto it: adj[node]){
            if(!vis[it]){
                q.push({it, node});
                vis[it]=1;
            }
            else if(parent != it){
                return true;
            }
        }
    }

    return false;


}

int main(){

    int n, m;
    cin>>n>>m;

    vector<int> adj[n+1];

    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int vis[n+1]={0};

    bool flag=false;

    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(detect(i, adj, vis)){
                flag=true;
            }
        }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}