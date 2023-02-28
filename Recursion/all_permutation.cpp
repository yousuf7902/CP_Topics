#include<bits/stdc++.h>
using namespace std;

void all_permu(vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans, vector<bool>& check){
    
    if(arr.size()==ds.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<arr.size();i++){
        if(!check[i]){
            ds.push_back(arr[i]);
            check[i]=1;
            all_permu(arr, ds, ans, check);
            check[i]=0;
            ds.pop_back();
        }
    }
}

int main(){

    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int x;cin>>x;

        arr.push_back(x);
    }

    vector<vector<int>> ans;
    vector<int>ds;
    vector<bool> check(n,0);

    all_permu(arr, ds, ans, check);

    cout<<"[";
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1)cout<<ans[i][j];
            else cout<<ans[i][j]<<",";
        }
        cout<<"]";
    }
    cout<<"]";






    return 0;
}