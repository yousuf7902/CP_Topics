#include<bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds){
    if(target==0){
        ans.push_back(ds);
        return;
    }

    for(int i=ind;i<arr.size();i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i] > target)break;

        ds.push_back(arr[i]);
        findCombination(i+1,target-arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

int main(){

    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
            int x;
            cin>>x;

            arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    int target;
    cin>>target;

    vector<int>ds;
    vector<vector<int>>ans;

    findCombination(0,target,arr, ans, ds);

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