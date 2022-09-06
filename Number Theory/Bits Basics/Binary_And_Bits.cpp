/*
    Operator => AND, OR , XOR, Left shift , Right shift, NOT

    A   B   AND   OR   XOR
    0   0    0     0    0
    0   1    0     1    1
    1   0    0     1    1
    1   1    1     1    0

    and symbol- &
    or symbol- |
    xor symbol- ^
    not symbol- !
    left shift symbol- <<
    right shift symbol- >>

    Left Shift: 

    So , 3 << 1 means 
    3 binary = 11
    after using left shift here from left extra 0 will be added
    
    3 << 1= 110

    According to this 3 << 2 = 1100

    Right Shift: 

    so, 6 >> 1 means,
    6 binary = 110
    after using right shift here from right a digit will be vanished

    6 >> 1= 11

    According to this 6 >> 2 = 1

*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    cout<<INT_MAX<<endl; 

    /*
        1 << n = 2^n  1 left shift of n is equal to 2 to power n

        1 << 0 = 1 = 1              2^0= 1
        1 << 1 = 10 = 2             2^1= 2
        1 << 2 = 100 = 4            2^2= 4
        1 << 3 = 1000 = 8           2^3= 8

    */

    unsigned int b = (1LL<<32)-1;
    int a = (1LL<<31)-1;

    /* integer value can store 32 bits but here we can see that for 32 bit integer value
        give us -1 and for 31 bits it gives the INT_MAX value. Because it is a signed integer. Here 1 bit is store for signed integer that's 
        why integer value store 31 bits.
    */

    cout<<b<<endl;
    cout<<a<<endl;

}