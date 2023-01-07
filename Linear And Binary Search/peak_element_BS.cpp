//Problem Link : https://leetcode.com/problems/find-peak-element/

#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    int low=0, high=n-1,peak=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(mid==0 && arr[mid]>arr[mid+1]){
            peak=mid;
            break;
        }
        else if(mid==n-1 && arr[mid]> arr[mid-1]){
            peak=mid;
            break;
        }
        else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
            peak=mid;
            break;
        }
        else if(arr[mid] < arr[mid+1]){
            low=mid+1;
        }
        else if(arr[mid] < arr[mid-1] ){
            high=mid-1;
        }
    }

    cout<<peak<<endl;

    //Test Cases
    /*
    
    4
    1 2 3 1
    Output:
    2
    
    7
    1 2 1 3 5 6 4
    Output:
    5
    
    */




    return 0;
}