#include<bits/stdc++.h>
using namespace std;

bool bipartite(int start, vector<int> adj[], int color[]){
    queue<int>q;
    q.push(start);

    color[start]=0;

    while(!q.empty()){
        int node=q.front();
        q.pop();

        for(auto it: adj[node]){
            if(color[it] == -1){
                color[it] = !color[node];
                q.push(it);
            }
            else if(color[it] == color[node]){
                return false;
            }
        }
    }

    return true;
}

int main(){

    int n, e;
    cin>>n>>e;

    vector<int> adj[n+1];

    int color[n+1];
    for(int i=0;i<n+1;i++){
        color[i]=-1;
    }

    for(int i=0;i<n;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int f=1;
    for(int i=1;i<=n;i++){
        if(color[i] == -1){
            if(bipartite(i, adj, color)==false)cout<<"NO"<<endl, f=0;
        }
    }

    if(f) cout<<"YES"<<endl;
    
    return 0;
}