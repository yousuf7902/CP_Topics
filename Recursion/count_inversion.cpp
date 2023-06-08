/*
Count Inversion:

take out the pairs from the array and pairs should be  arr[i] > arr[j] 
that means left element should be greater than the right element 

*/

#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left=low, right=mid+1;

    int cnt=0;

    while(left<=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt+=(mid -left+1);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

    return cnt;
}

int merge_sort(int arr[], int low, int high){
    int cnt=0;
    if(low==high)return cnt;
    int mid=(low+high)/2;

    cnt+=merge_sort(arr, low, mid);
    cnt+=merge_sort(arr,mid+1, high);

    cnt+=merge(arr, low, mid, high);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<merge_sort(arr, 0, n-1)<<endl;

    return 0;
}