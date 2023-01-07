#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,ans="NOT FOUND";
    cin>>s;

    char find;
    cin>>find;

    int low=0, high=s.size()-1;

    while(low<=high){
        int mid=low+(high - low)/2;

        if(s[mid]==find){
            low=mid+1;
        }
        else if(s[mid] > find){
            ans=s[mid];
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<endl;

    return 0;
}