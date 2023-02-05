/*
    More Basic Problems using recursion
    1. Reverse an array
    2. Check if a string is palindrome or not

*/

#include<bits/stdc++.h>
using namespace std;

//Reverse array funciton
void reverse_num(int a, int b, int arr[]){
    if(a>=b)return;

    swap(arr[a], arr[b]);
    return reverse_num(a+1, b-1, arr);
}

//palindrone function
string palindrone(int a, string &s){
    if(a >= s.size()/2) return "True";

    if(s[a]!=s[s.size()-a-1])return "FALSE";

    return palindrone(a+1, s);

}

int main(){
    //Reverse array code
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    reverse_num(0, n-1, arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //palindrone code

    string s;
    cin>>s;

    cout<<palindrone(0,s);




    return 0;
}