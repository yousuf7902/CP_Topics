#include<bits/stdc++.h>
using namespace std;

void subset_sum2(int ind, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
    ans.push_back(ds);

    for(int i=ind;i<arr.size();i++){
        if(i!=ind && arr[i]==arr[i-1])continue;

        ds.push_back(arr[i]);
        subset_sum2(i+1, arr, ans, ds);
        ds.pop_back();
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

    sort(arr.begin(), arr.end());
    vector<vector<int>>ans;
    vector<int> ds;

    subset_sum2(0, arr, ans, ds);

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
}