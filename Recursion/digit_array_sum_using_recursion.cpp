#include<bits/stdc++.h>
using namespace std;

// sum of array
// sum(n,a) => sum of elements in a uptill n index
// sum(n, a) => a[n] + sum(n-1, a);

int sum(int n, int a[]){
        if(n<0)return 0;
        return sum(n-1, a) + a[n];
}

//digit sum
//digit_sum (n) -> digit_sum(n/10)+last_digit
//2314 => 231 + 4

int digit_sum(int n){
    if(n==0)return 0;

    return digit_sum(n/10)+ (n%10);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int a;
    cin>>a;

    int digit;
    cin>>digit;

    cout<<sum(a-1 , arr)<<endl;
    cout<<digit_sum(digit)<<endl;


    return 0;
}