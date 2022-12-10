#include "bits/stdc++.h"
using namespace std;

double eps=1e-6;

double multiply(double mid, int n){
    double ans=1;
    for(int i=0;i<n;i++){
        ans*=mid;
    }

    return ans;
}


int main(){

    double x;
    int n;
    cin>>x>>n;

    double lo=1, hi=x;

    while(hi-lo > eps){
        double mid=(hi+lo)/2.0;

        if(multiply(mid, n) < x){
            lo=mid;
        }
        else{
            hi=mid;
        }
    }

    cout<<lo<<" "<<hi<<endl;

    // Time complexity P*(log(N*(10^d)))
    // For pth root of number n with a d decimal accuracy

}
