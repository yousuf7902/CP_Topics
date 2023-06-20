/*
    Pre Compute basics:

    Given T test cases and in each test case a N given. Print the factorial for each test cases

    Constraints: 
        1<= T <= 10^5
        1<= N <= 10^5

    If we do the brute force then it will gives TLE - Time Limit Exceed . To avoid this situations
    we can pre compute the data and after the given each case the pre compute data will give us in 
    o(1) time . So that TLE will be avoid.

*/
#include<bits/stdc++.h>
using namespace std;

const int s= 1e5+10;

long long int pre[s];

int main(){

    pre[0]=1;

    for(int i=1;i<=s;i++){
        pre[i]=pre[i-1]*i;
    }

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        cout<<pre[n]<<endl;
    }

    return 0;
}