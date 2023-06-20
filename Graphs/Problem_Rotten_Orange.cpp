#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m;
    cin>>n>>m;

    int grid[n][m],fresh=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            if(grid[i][j]==1)fresh++;
        }
    }

    int vis[n][m];
    queue<pair<pair<int, int>, int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i, j}, 0});
                vis[i][j]=2;
            }
            else{
                vis[i][j]=0;
            }
        }
    }

    int tm=0,cnt=0;
    
    int d_row []={0, -1, 0, 1};
    int d_col[]= {-1, 0, 1, 0};

    while(!q.empty()){
        int r= q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        tm=max(tm, t);
        q.pop();

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                int nrow=r+d_row[i];
                int ncol=c+d_col[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && vis[nrow][ncol]== 0 && grid[nrow][ncol]== 1){
                    q.push({{nrow, ncol}, t+1});
                    vis[nrow][ncol]=2;
                    cnt++;
                }
            }
        }
    }

    if(cnt==fresh)cout<<tm<<endl;
    else cout<<-1<<endl;


    return 0;
}