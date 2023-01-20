#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int> qu;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        qu.push(x); // qu.push() store the inputs into queues
    }

    while(qu.size()){
        cout<<qu.front()<<endl; // qu.front() access the first element which one you give input and give the output

        qu.pop();

    }



    return 0;
}