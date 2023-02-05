/*
    Basic Recursion Problems

    1. Print your name N times
    2. Print 1-N linearly
    3. Print N-1 Linearly
    4. Print 1-N by backtracking
    5. Print N-1 by backtracking

*/

#include<bits/stdc++.h>
using namespace std;


void name(int a, int n){
        if(a>n)return;
        
        cout<<"RECURSION BY YOUSUF"<<endl;
        name(a+1, n);
    }

void accending(int a, int n){
        if(a>n)return ;
        cout<<a<<endl;
        accending(a+1, n);
    }

void decending(int a, int n){
    if(a<1)return;
    cout<<a<<endl;
    decending(a-1, n);
}

void backTrack_1_N(int a, int n){
    if(a<1)return;
    backTrack_1_N(a-1, n);
    cout<<a<<endl;
}

void backTrack_N_1(int a, int n){
    if(a > n) return ;

    backTrack_N_1(a+1, n);
    cout<<a<<endl;
}



int main(){

    int n;
    cin>>n;

    name(1,n);

    cout<<endl;

    accending(1, n);

    cout<<endl;

    decending(n, n);

    cout<<endl;

    backTrack_1_N(n, n);

    cout<<endl;

    backTrack_N_1(1,n);




    return 0;
}