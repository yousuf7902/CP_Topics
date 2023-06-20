/*
    BFS means Breadth First Search
    BFS is a technique to traverse a graph, it will traverse a graph by level wise.
    Queue data structure used in BFS algorithm.

    Space Complexity: O(3N) ~= O(N)
    Time Complexity: O(N) + O(2*Edeges)
    
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, e;
    cin>>n>>e;

    vector<int> adj[n+1];

    int vis[n+1]={0};

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin>>start;

    vector<int>bfs;
    queue<int> q;

    vis[start]=1;
    q.push(start);

    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }

    for(auto it: bfs){
        cout<<it<<endl;
    }

    return 0;
}