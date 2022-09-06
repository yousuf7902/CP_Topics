#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
    for(int i=10;i>=0;i--){
        cout<<((num>>i)&1);
    }
    cout<<endl;
}

int main(){

    for(int i=0;i<8;i++){
        printBinary(i);
        
        //if we want to chack any number odd or even then we have to do the number and with 1

        if(i & 1){
            cout<<"ODD"<<endl;
        }
        else{
            cout<<"EVEN"<<endl;
        }
    }

    // Multiply*2 and Divide/2 by bit manupulation
    // >> right shift 1 is used for divide/2
    // << left shift 1 is used for multiply*2

    int n=5;
    cout<<(n>>1)<<endl;
    cout<<(n<<1)<<endl;


    //Uppercase to lowecase and vice versa
    char A='A';
    char a= A | (1<<5); // we have set 5th bits to uppercase to lowercawse its follow a pattern

    cout<<a<<endl;

    cout<<char(a&(~(1<<5)))<<endl; // we have to unset 5th bits to lowercase to uppercase 

    //Another way to convert uppercase to lowercase
    cout<<char('C' | ' ' )<<endl; // if we do | (or ) with space and Uppercase it will gives us Lowercase

    cout<<char('c' & '_')<<endl; // if we do & (and) with underscore and lowercase it will give us uppercase

    //Clear LCB
    

    return 0;
}
