#include<bits/stdc++.h>
using namespace std;



int main(){
    stack<int> input,output;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        input.push(x);

    }

    if(output.empty()){
        while(input.empty()==false){
            output.push(input.top());
            input.pop();
        }
    }

    for(int i=0;i<n;i++){
        cout<<output.top()<<endl;
        output.pop();
    }
    




    return 0;
}