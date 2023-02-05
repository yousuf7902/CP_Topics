/*
    Problem: Print the nth fibonacci number

*/

#include<bits/stdc++.h>
using namespace std;


int f(int n){
    if(n<=1)return n;

    int last=f(n-1);
    int s_last=f(n-2);

    return last+s_last;
}

int main(){


    int n;
    cin>>n;

    cout<<f(n)<<endl;


    return 0;
}

//Time complexity: near about O(2^n) it is called exponential