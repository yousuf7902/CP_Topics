#include<bits/stdc++.h>
using namespace std;

void subset_sum(int ind, int size, int arr[], vector<int>& ans, int sum){
    if(ind==size){
        ans.push_back(sum);
        sum=0;
        return;
    }

    //pick elements
    subset_sum(ind+1, size, arr, ans, sum+arr[ind]);

    // non pick elements
    subset_sum(ind+1, size, arr, ans, sum);
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>ans;
    subset_sum(0, n, arr, ans, 0);

    sort(ans.begin(), ans.end());

    for(auto it: ans){
        cout<<it<<" ";
    }


}