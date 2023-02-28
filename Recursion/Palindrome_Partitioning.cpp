#include<bits/stdc++.h>
using namespace std;

bool is_palin(string s, int start, int end){
    while(start<=end){
        if(s[start++]!=s[end--]){
            return false;
        }
    }

    return true;
}

void partition(int index, string s, vector<vector<string>>& res, vector<string>& path){
    if(index==s.size()){
        res.push_back(path);
        return;
    }

    for(int i=index;i<s.size();i++){
        if(is_palin(s, index, i)){
            path.push_back(s.substr(index, i-index+1));
            partition(i+1, s, res, path);
            path.pop_back();
        }
    }


}

int main(){

    string s;
    cin>>s;
    vector<vector<string>>res;
    vector<string>path;

    partition(0, s, res, path);

    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}