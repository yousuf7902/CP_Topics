#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    //using 2 queues implement stack
    queue<int> q1, q2;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        q2.push(x);

        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);

    }

    for(int i=0;i<n;i++){
        cout<<q1.front()<<endl;
        q1.pop();
    }

    // Using 1 queues implement stack

    queue<int> q3;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        q3.push(x);

        if(q3.size()>1){
            for(int i=0;i<q3.size()-1;i++){
                q3.push(q3.front());
                q3.pop();
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<q3.front()<<endl;
        q3.pop();
    }

    return 0;
}