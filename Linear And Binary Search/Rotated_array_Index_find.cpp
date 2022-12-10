#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++){
        cin>>vec[i];
    }

    int low=0, high=n-1, result=0;

    while(low<=high){
        int mid=low+(high-low)/2, next=(vec[mid]+1)%n, prev=vec[mid+n-1]%n;

        if(vec[mid]<= vec[next] && vec[mid]<= vec[prev]){
            result=mid;
            break;
        }
        else if(vec[low] <= vec[mid]){
            low=mid+1;
        }
        else if(vec[mid]<= vec[high]){
            high=mid-1;
        }

    }

    cout<<result<<endl;


    return 0;
}