// Nearly sorted means given elements will found in ith position or ith+1 position or ith-1 position

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int element;
    cin>>element;

    int ans=-1;

    int low=0, high=n-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]== element){
            ans=mid;
            break;
        }
        else if(mid+1<=high && arr[mid+1]==element){
            ans=mid+1;
            break;
        }
        else if(mid-1<=low && arr[mid-1]==element){
            ans=mid-1;
            break;
        }
        else if(arr[mid]< element){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans<<endl;

    return 0;
}