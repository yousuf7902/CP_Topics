#include<bits/stdc++.h>
using namespace std;

/*------------------------------------------------------------------------------*/
//>>>>>>>>>>>>>>>>>>>> Number Conversion Method with function <<<<<<<<<<<<<<<<<<//
//------------------------------------------------------------------------------//


// >>>>>>>>>>>>>>>>>>>> Binary To Decimal <<<<<<<<<<<<<<<<<< //
int binaryToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num % 10;
        ans += x * y;
        x *= 2;
        num /= 10;
    }
    return ans;
}

// >>>>>>>>>>>>>>>>>>>> Octal To Decimal <<<<<<<<<<<<<<<<<< //

int octalToDecimal(int num){
    int ans = 0;
    int x = 1;
    while(num>0){
        int y = num % 10;
        ans += x * y;
        x *= 8;
        num /= 10;
    }
    return ans;
}

// >>>>>>>>>>>>>>>>>>>> Hex To Decimal <<<<<<<<<<<<<<<<<< //

int hexToDecimal(string hex){
    int ans = 0;
    int x = 1;
    int s = hex.size();
    for (int i = s - 1; i >= 0;i--){
        if(hex[i]>='0' && hex[i]<='9'){
            ans += x * (hex[i] - '0');
        }
        else if(hex[i]>= 'A' && hex[i]=='F'){
            ans += x * (hex[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
} 

// >>>>>>>>>>>>>>>>>>>> Decimal To Binary <<<<<<<<<<<<<<<<<< //

int decimalToBinary(int num){
    int x = 1;
    int ans = 0;
    while(x<=num){
        x *= 2;
        x /= 2;
    }
    while(num>0){
        int lastDigit = num / x;
        num -= lastDigit * x;
        x /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
} 

// >>>>>>>>>>>>>>>>>>>> Decimal To Octal <<<<<<<<<<<<<<<<<<< //

int decimalToOctal(int num){
    int ans = 0;
    int x = 1;
    while(x<=num){
        x *= 8;
        x /= 8;
    }
    while(x>0){
        int lastDigit = num / x;
        num -= lastDigit * x;
        x /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

// >>>>>>>>>>>>>>>>>>>> Decimal To Hex <<<<<<<<<<<<<<<<<< //

string decimalToHexadecimal(int num){
    int x = 1;
    string ans = "";
    while(x<=num){
        x *= 16;
        x /= 16;
    }
    while(x>0){
        int lastDigit = num / x;
        num -= lastDigit * x;
        x /= 16;
        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
        return ans;
    }
}

int main(){
    string hex;
    int num;
    cin >> num>> hex;

    cout << binaryToDecimal(num) << endl;
    cout << octalToDecimal(num) << endl;
    cout << hexToDecimal(hex) << endl;
    cout << decimalToOctal(num) << endl;
    cout << decimalToHexadecimal(num) << endl;

    return 0;
}