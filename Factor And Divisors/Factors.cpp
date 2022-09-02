#include<bits/stdc++.h>
using namespace std;


int main(){
    //Finding factors ,count factors, sum factors in brute force method 

    int n;
    cin >> n;

    int cnt = 0, sum = 0;
    for (int i = 1; i <= n;i++){
        if(n%i==0){
            cout << i << endl;
            cnt++;
            sum += i;
        }
    }

    // Finding factors ,count factors, sum factors in squre root of method

    int sq_cnt = 0, sq_sum = 0 ;
    for (int i = 1; i*i <= n;i++){
        if(n%i==0){
            cnt++;
            sum +=i;
            if(i!=n/i){
                cnt++;
                sum += n / i;
            }
        }
    }
        return 0;
}