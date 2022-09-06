/*
    Formula:
    1.(a+b)% M=((a % M) + (b % M)) % M
    2.(a*b)% M= ((a % M) * (b % M)) % M
    3.(a-b)% M= ((a % M) - (b % M) + M) % M

    Given a number N. Print its factorial.
    Constraints : 1<=N<=100

    print answer module M
    where m=47

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m=47;
    cin >> n;

    long long fact = 1;

    for (int i = 2; i <= n;i++){
        fact = (fact * i) % m;
    }

    cout << fact << endl;

    return 0;
}