//for finding an element into infinite array we have to find the postions first...always an element lies in between range
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int find;
    cin>>find;

    sort(arr, arr+n);

    int low=0,high=1;

    //we have to find the postions first
    while(arr[high] < find){
       low=high;
       high=high*2;
    }


    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==find){
            ans=arr[mid];
            break;
        }
        else if(arr[mid]< find){
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }

    cout<<ans<<endl;



    return 0;
}