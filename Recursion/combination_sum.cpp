#include<bits/stdc++.h>
using namespace std;

void find_combination(int ind,int size, int target, int arr[], vector<vector<int>> &ans, vector<int> ds){
    if(ind==size){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }


    if(arr[ind]<= target){
        ds.push_back(arr[ind]);
        find_combination(ind, size,target-arr[ind], arr, ans, ds);
        ds.pop_back();
    }

    find_combination(ind+1,size, target, arr, ans, ds);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int target;
    cin>>target;

    vector<vector<int>> ans;
    vector<int> ds;

    find_combination(0, n,target, arr, ans, ds);

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