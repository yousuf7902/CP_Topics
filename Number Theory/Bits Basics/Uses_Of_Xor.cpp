#include<bits/stdc++.h>
using namespace std;

int main(){

    //Two number swaps
    int a=4, b=6;

    // xor operations
    // 1 0 ---> 1
    // 0 1 ---> 1
    // 0 0 ---> 0
    // 1 1 ---> 0

    // x ^ x == 0   101 ^ 101 = 000
    // x ^ 0 == x   101 ^ 000 = 101

    a=a^b;

    b=b^a;
    a=a^b;

    /* 
    Given array a of n intergers. All integers are present 
    in even count except one. Find that one integer which has 
    odd count in O(N) time complexity and O(1) space ;

    N< 10^5
    arr[i]< 10^5

    */

    int n;
    cin>>n;
    int x;
    int ans=0;

    for(int i=0;i<n;i++){
        cin>>x;
        ans^=x;
    }

    cout<<ans<<endl;

    return 0;
}