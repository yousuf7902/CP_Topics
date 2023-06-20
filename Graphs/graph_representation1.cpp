/*
    Graph Representations for undirected  graph:

    There are ways to represent a graph.
        1. Using Matrix
        2. Using List
*/

// Using Matrix Way
// There will be given nodes and number of edges. Then edges will represent by given 2 number where to where edges going
// Then all the data will store into a adjacent matrix . In undircted graph all the edges point will be add like this (2,1), (1,2).
// Space => O(n*n) = O(n^2) // Costly for spacing because waste of memory

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, e;
    cin>>n>>e;

    int adj[n+1][n+1];

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;    /* if there is directed graph then this line is not need beacuse 
                            if u -> v there is no need to store v -> u , Space => O(E)
                        */
    }

    return 0;
}

//Using list/ array based
// Here we will take vector based array for representation the graph edges
// Then all the data will store into that vector based array
// Space => O(2*Edges) // Much better

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, e;
    cin>>n>>e;

    vector<int> adj[n+1];

    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);    /* if there is directed graph then this line is not need beacuse 
                                   if u -> v there is no need to store v -> u , Space => O(E)
                                */
    }

    return 0;
}