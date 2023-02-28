 #include"bits/stdc++.h"
 using namespace std;
int m[5][5];

 void solve(int i, int j,int n, vector<string>& ans, string move, vector<vector<int>>& vis, int di[], int dj[]){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }

        string dir="DLRU";

        for(int ind=0;ind<dir.size();ind++){
            int nexti=i+di[ind];
            int nextj=j+dj[ind];

            if(nexti>=0 && nextj>=0 && nexti<n && nextj<n && !vis[nexti][nextj] && m[nexti][nextj]==1){
                vis[nexti][nextj]=1;
                solve(nexti, nextj, n,ans, move+dir[ind], vis, di, dj);
                vis[nexti][nextj]=0;
            }
        }
 }

 int main(){
    int n;
    cin>>n;

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }


    vector<vector<int>> vis(n, vector<int> (n,0));
    vector<string>ans;

    int di[]={1,0, 0, -1};
    int dj[]={0, -1, 1, 0};
    

    if(m[0][0]==1)solve(0, 0, n, ans, "",vis, di, dj);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
 }