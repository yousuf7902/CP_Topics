#include<bits/stdc++.h>
using namespace std;

void all_permu(int ind, vector<int>& arr, vector<vector<int>>& ans){
    if(ind==arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int i=ind;i<arr.size();i++){
        swap(arr[ind], arr[i]);
        all_permu(ind+1, arr, ans);
        swap(arr[ind], arr[i]);
    }


}

int main(){

    int n;
    cin>>n;

    vector<int>arr;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr.push_back(x);
    }

    vector<vector<int>>ans;
    all_permu(0, arr, ans);


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