#include<bits/stdc++.h>
using namespace std;

const int s=1e5+10;

int pre_fix[s];

int main(){

    int n;
    cin>>n;

    int arr[n+1];

    for(int i=1;i<=n;i++){
        cin>>arr[i];

        pre_fix[i]=pre_fix[i-1]+arr[i];

    }

    int q;
    cin>>q;

    while(q--){
        int l, r;
        cin>>l>>r;

        cout<<pre_fix[r]-pre_fix[l-1]<<endl;
    }

/*
6
3 6 2 8 9 2
4
2 3
4 6
1 5
3 6

Output Will be: 

8
19
28
21
    
    
*/




    return 0;
}