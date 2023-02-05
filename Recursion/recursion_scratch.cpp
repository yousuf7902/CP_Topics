#include<bits/stdc++.h>
using namespace std;

//Factorial of N

int fact(int n){
    if(n==0)return 1;
    return fact(n-1)*n;
}

void func(int n){
    if(n==0)return;
    //cout<<n<<endl;
    func(n-1);
    cout<<n<<" ";
}

int main(){


    int n;  
    cin>>n;

    func(n);
    cout<<endl;
    cout<<fact(n);


    return 0;
}