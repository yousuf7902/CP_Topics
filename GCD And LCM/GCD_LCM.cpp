#include <bits/stdc++.h>
using namespace std;

// using euclidio method and recursion we make divisor to dividend until remainder 0

int gcd(int a,int b){

    if(b==0)
        return a;

    return gcd(b, a%b);
}


int main(){
    cout << gcd(9, 21) << endl;
    cout << gcd(12, 18) << endl;

    // You can also use built in function
    cout << __gcd(12, 18) << endl;

    //Time complexity of both O(log(n))

    //For lcm we know a formula that is  a*b/gcd(a,b)
    //LCM
    cout << (12 * 18) / gcd(12, 18) << endl;

    return 0;
}