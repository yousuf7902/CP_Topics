#include "bits/stdc++.h"
using namespace std;

int first_occurence(vector<int> &arr, int size , int value){
    int low=0, high=size-1,result=-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]==value){
            high=mid-1;
            result=mid+1;
        }
        else if(arr[mid] < value){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return result;
}

int last_occurence(vector<int> & arr, int size , int value){
    int low=0, high=size-1, result=-1;

    while(low<=high){
        int mid= low+ (high-low)/2;

        if(arr[mid]==value){
            low=mid+1;
            result=mid+1;
        }
        else if(arr[mid] < value){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return result;
}

int main(){


    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n ;i++){
        cin>>vec[i];
    }

    sort(vec.begin(), vec.end());

    int element;
    cin>>element;

    int fs_occ=first_occurence(vec, n, element);
    int ls_occ=last_occurence(vec, n , element);

    cout<<fs_occ<<" "<<ls_occ<<endl;

    //count the elements in sorted array

    cout<<(ls_occ-fs_occ)+1<<endl;

    return 0;
}