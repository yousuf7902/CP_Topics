#include<bits/stdc++.h>
using namespace std;

bool detect(int src, int parent, vector<int> adj[], int vis []){
    vis[src]=1;

    for(auto it: adj[src]){
        if(!vis[it]){
            if(detect(it, src, adj , vis))return true;
        }
        else if(it != parent) return true;
    }

    return false;

}

int main(){

    int n, e;
    cin>>n>>e;

    int vis[n+1]={0};
    vector<int> adj[n+1];

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool flag=false;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            if(detect(i,-1, adj, vis)){
                flag=true;
            }
        }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



    return 0;
}