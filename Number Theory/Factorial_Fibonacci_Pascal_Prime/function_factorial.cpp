#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int factorial=1;
    for (int i = 2; i <= num;i++){
        factorial = factorial * i;
    }
    return factorial;
}

int main(){
    int num;
    cin >> num;

    int ans = fact(num);
    cout << ans << endl;
}