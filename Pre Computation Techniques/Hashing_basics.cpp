/*
    Hashing Basics:

    Given an array of N intergers. Given Q queries and each queries given a X . We have to count the X numbers 
    in to that array.

    Like an array ,  5,6,7,5,5,2,1 given X is 5 So the ans will be 3

    Constraints:

        1 <= N <= 10^5
        1 <= arr[i] <= 10^7
        1 <= Q <= 10^5

    If we solve it in brute force method then it will give us TLE- Time limit exceed. To avoid the TLE we have pre compute
    the count of this array before the taking queries input. By pre computing we can avoid the TLE. In this problem we 
    actually using the hashing concept. We apply this method only if the size of an array <= 10^7 otherwise we can't use this
    method to solve this problem.

*/

#include<bits/stdc++.h>
using namespace std;

const int s=1e7+10;
int hsh[s];

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        hsh[arr[i]]++;
    }

    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;

        cout<<hsh[x]<<endl;
    }






    return 0;
}