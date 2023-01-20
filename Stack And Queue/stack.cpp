#include<bits/stdc++.h>
using namespace std;


int main(){

    stack<int> st;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        st.push(x); // st.push() taken input in to the stack
    }

    while(st.size()){
        cout<<st.top()<<endl; // st.top() access the first element which is input first
        st.pop(); // st.pop() it will remove the first element which is input first
    }



    return 0;
}