#include<bits/stdc++.h>
using namespace std;

/*------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>>>> Reverse A Number <<<<<<<<<<<<<<<<<<<<< //
//------------------------------------------------------------------//

int main(){
    int num;
    cin >> num;

    int reverse;
    while(num>0){
        int lastdigit = num % 10;
        reverse= reverse*10+lastdigit;
        num = num / 10;
    }
    cout << reverse << endl;
}