#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int col, vector<int> adj[], int color[]){
    color[node]=col;

    for(auto it: adj[node]){
        if(color[it]== -1){
            if(dfs(it, !col, adj, color)==false)return false;
        }
        else if(color[it]==col){
            return false;
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

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int f=1;
    for(int i=1;i<=n;i++){
        if(color[i]== -1){
            if(dfs(i, 0, adj, color) == false)cout<<"NO"<<endl, f=0;
        }
    }

    if(f)cout<<"YES"<<endl;


    return 0;
}