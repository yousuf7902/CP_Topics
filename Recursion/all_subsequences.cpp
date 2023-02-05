// Subsequences is not contigious but it will maintain the sequences
/*
    {2,1,3} = {2,1,3}, {2,1}, {2, 3}, {1, 3}, {1}, {2}, {3} , { } it possible subsequences of an array

    but here {1,2}, {3,2} ,{3,1,2} is not possible because it will not maintain the sequences.

*/

#include<bits/stdc++.h>
using namespace std;


void subsq(int ind, vector<int> &vec, int arr[], int size){
    if(ind>=size){
        for(auto it: vec){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }

    //take or pick the particular index into the subsequence
    vec.push_back(arr[ind]);
    subsq(ind+1, vec, arr, size);
    vec.pop_back();

    //not pick, or not take condition, this element is not added to your subsequences
    subsq(ind+1, vec, arr, size);
}

int main(){

    int arr[]={2,1,3};
    int n=3;
    vector<int> vec;

    subsq(0, vec, arr, n);


    return 0;
}