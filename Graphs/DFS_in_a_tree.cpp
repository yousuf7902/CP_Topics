#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int> adj[N];
int depth[N], height[N];

void dfs(int node, int parent){
    for(auto child: adj[node]){

        if(child==parent)continue;

        depth[child] = depth[node] + 1;

        dfs(child, node);

        height[node]=max(height[node], height[child]+1);
        
    }
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n-1;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, 0);

    for(int i=1;i<=n;i++){
        cout<<depth[i]<<" "<<height[i]<<endl;
    }
}