//Problem Link: https://cses.fi/problemset/task/1620

#include "bits/stdc++.h"
using namespace std;
 
int main(){
    long long n, k;
    cin>>n>>k;
    
    vector<long long>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    
    long long l=0, h=1e18, a=0;
    
    while(l<=h){
        long long mid=(l+h)/2;
        long long ans=0;
        
        for(int i=0;i<n;i++){
            ans+=(mid/vec[i]);
            
            if(ans>=k)break;
        }
        
        if(ans>=k){
            a=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    
    cout<<a<<endl;
 
    
}