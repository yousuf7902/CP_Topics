#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    sort(arr, arr+n);

    //find the 1st occurence of 1 in infinite array;

    int low=0, high =1;

    while(arr[high] < 1){
        low=high;
        high=high*2;
    }

    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==1){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid] < 1){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}