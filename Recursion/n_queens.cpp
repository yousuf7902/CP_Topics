#include<bits/stdc++.h>
using namespace std;

bool is_safe(int row, int col,vector<string>& board, int size){
        int p_row=row;
        int p_col=col;

        while(row>=0 && col>=0){
            if(board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }

        row=p_row;
        col=p_col;

        while(row<size && col>=0){
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }

        col=p_col;
        row=p_row;

        while(col>=0){
            if(board[row][col]=='Q')return false;

            col--;
        }

        return true;
}

void show_n_queen(int col, vector<string>& board, vector<vector<string>>& ans, int size){
        if(col==size){
            ans.push_back(board);
            return;
        }

        for(int i=0;i<size;i++){
            if(is_safe(i, col, board, size)){
                board[i][col]='Q';
                show_n_queen(col+1, board, ans, size);
                board[i][col]='.';
            }
        }
}

int main(){

    int n;
    cin>>n;

    string s(n, '.');

    vector<vector<string>>ans;
    vector<string>board(n);

    for(int i=0;i<n;i++){
        board[i]=s;
    }

    show_n_queen(0, board, ans, n);

    for(int i=0;i<ans.size();i++){
        cout<<"Arrangement : "<<i+1<<endl;
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
        
    }



}