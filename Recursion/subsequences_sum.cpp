#include<bits/stdc++.h>
using namespace std;

//print all subsequences == sum

/*void print_subsq(vector<int> &vc,int i, int arr[],int s, int size, int sum){

        if(size==i){
            if(sum==s){
                for(auto it:vc){
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            return;
        }

        vc.push_back(arr[i]);
        s+=arr[i];
        print_subsq(vc,i+1, arr,s, size,sum);

        vc.pop_back();
        s-=arr[i];
        print_subsq(vc, i+1, arr, s,size ,sum);
}*/

//print only one subsequence == sum

/*bool print_subsq(vector<int> &vc,int i, int arr[],int s, int size, int sum){

        if(size==i){
            if(sum==s){
                for(auto it:vc){
                    cout<<it<<" ";
                }
                cout<<endl;
                return true;
            }
            return false;
        }

        vc.push_back(arr[i]);
        s+=arr[i];
        if(print_subsq(vc,i+1, arr,s, size,sum)==true){
            return true;
        }

        vc.pop_back();
        s-=arr[i];
        
        if(print_subsq(vc, i+1, arr, s,size ,sum)==true){
            return true;
        }

        return false;
}*/

// Print the subsequences number which is == sum
// for that there is no vector needed

int print_subsq(vector<int> &vc,int i, int arr[],int s, int size, int sum){

        if(size==i){
            if(sum==s)return 1;
            else return 0;
        }

        vc.push_back(arr[i]);
        s+=arr[i];
        int l = print_subsq(vc,i+1, arr,s, size,sum);

        vc.pop_back();
        s-=arr[i];
        int r= print_subsq(vc, i+1, arr, s,size ,sum);

        return l+r;
}



int main(){

    int arr[]={1,2,1};

    int n=3;

    int sum=2;

    vector<int> vec;

    print_subsq(vec,0,arr,0, n, sum);



    return 0;
}

// Technique to print one answer