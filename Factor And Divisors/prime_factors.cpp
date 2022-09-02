#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> prime_factor;

    //In brute force way [ time complexity => O(N) ]
    for (int i = 2; i <= n;i++){
        while(n%i==0){
            prime_factor.emplace_back(i);
            n = n / i;
        }
    }

    //In optimise way [ time complexity => O(sqrt(N)) ]
    for (int i = 2; i*i <= n;i++){
        while(n%i==0){
            prime_factor.emplace_back(i);
            n = n / i;
        }
    }
    // but there is a problem for non prime number like for 3 this loop is not running because of i*i and 3 will not print that's why we have to do this

    if(n>1){
        prime_factor.emplace_back(n);
    }

        return 0;
}