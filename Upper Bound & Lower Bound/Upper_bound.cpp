#include "bits/stdc++.h"
using namespace std;

int upper_bound(vector<int>&v, int element){
    int lo=0, hi=v.size()-1;

    while(hi-lo>1){
        int mid=(hi+lo)/2;

        if(v[mid] <= element){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }

    if(v[lo]>element){
        return v[lo];
    }
    else if(v[hi]>element){
        return v[hi];
    }
    else return -1;


}

int main(){

    int n;
    cin>>n;


    vector<int> vec;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        vec.push_back(x);
    }

    sort(vec.begin(), vec.end());

    int element;
    cin>>element;

    int value=upper_bound(vec, element);

    cout<<value<<endl;


}

/*-------------------------------Upper Bound----------------------------------*/
                                                                         
                            /***** Using STL *****/  

/*------------------------------------------------------------------------------*/

#include "bits/stdc++.h"
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    for(int i=0;i<n;i++)cin>>vec[i];

    sort(vec.begin(), vec.end());

    int element;
    cin>>element;
    

    int u_bound=upper_bound(vec.begin(), vec.end(), element)- vec.begin(); // for find out the index;
    
    if(u_bound < n){
        cout<<vec[u_bound]<<" => Index: "<< u_bound<<endl;
    }
    else{
        cout<<-1<<endl;
    }

}