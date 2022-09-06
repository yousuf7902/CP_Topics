/*
    8 7 6 5 4 3 2 1 => position
    1 0 0 0 1 1 1 1
    binary indexing start from right to left

    Right most bit is called least significant bit (LSB)
    Left most is called Most significant bit (MSB)

    Set means bit is = 1
    Unset means bit is = 0

    every binary number of 2^n - 1 all number will be 1
    2^2-1 = 4-1 = 3 binary number 011
    2^3-1 = 8-1 = 7 binary number 111 


*/

#include<bits/stdc++.h>
using namespace std;


void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout << ((num >> i) & 1);
    }
    cout<<endl;
}


int main(){

    printBinary(11);

    int a=11;
    int i=2;

    if((a & (1<<i))!=0){
        cout<<"SET BIT"<<endl;
    }
    else{
        cout<<"NOT SET BIT"<<endl;
    }

    //bit set
    printBinary( a | (1<<2));

    //bit unset
    printBinary(a & (~(1<<3)));

    //toggle the bit it means 0 will be 1 and 1 will be 0
    printBinary( a ^ (1<<2));

    //Count the set bits

    int cnt=0;
    for(int i=31;i>=0;i--){
        if((a & (1<<i))!=0)cnt++;
    }

    cout<<cnt<<endl;

    //In built function for set bits count
    cout<<__builtin_popcount(a)<<endl;
    //For long long integers
    cout<<__builtin_popcountll(1ll<<39)<<endl;

    return 0;
}