/*
    DFS means Depth First Search
    DFS is an another technique to traverse a graph, it will traverse a graphs by depth of a node.
    Stack data structure used in DFS algorithm.

    Space Complexity: O(N) + O(N) + O(N) ~= O(N)
    Time Complexity: O(N) + O(2*Edeges)
    
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> dfs_ans;

void dfs(int start, int vis[], vector<int>adj[]){
        vis[start]=1;
        dfs_ans.push_back(start);

        for(auto it: adj[start]){
            if(!vis[it]){
                dfs(it, vis, adj);
            }
        }
}

int main(){

    int n , e;
    cin>>n>>e;

    vector<int> adj[n+1];

    for(int i=0;i<e;i++){
        int u , v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin>>start;

    int vis[n+1]={0};
    

    dfs(start, vis, adj);

    for(auto it: dfs_ans){
        cout<<it<<" ";
    }


    return 0;
}