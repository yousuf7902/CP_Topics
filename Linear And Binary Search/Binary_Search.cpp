 /*-------------------------------Binary Search----------------------------------*/
                                                                         
               /*****{8,10,12,21,27,34,42} find 27 and print index*****/  

/*------------------------------------------------------------------------------*/


#include "bits/stdc++.h"
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> vc;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vc.push_back(x);
    }
    
    sort(vc.begin(), vc.end());
    
    int to_find;
    cin>>to_find;

    int lo=0, hi=n-1;

    while(hi-lo>1){
        int mid=(hi+lo)/2;

        if(vc[mid]<to_find){
            lo=mid+1;
        }
        else{
            hi=mid;
        }
    }

    if(vc[lo]==to_find){
        cout<<to_find<<endl;
    }
    else if(vc[hi]==to_find){
        cout<<to_find<<endl;
    }
    else {
        cout<<"NOT FOUND"<<endl;
    }

     /*-------------------------------Binary Search----------------------------------*/
                                                                         
                                /***** Another way *****/  

    /*------------------------------------------------------------------------------*/

    int array[n],key;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    cout << "Input search key: " << endl;
    cin >> key;

    int s = 0, e = n;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (array[mid] == key)
        {
            cout << "Index = " << mid << " "
                 << "Number= " << array[mid];
            return 0;
        }
        else if (array[mid] < key)
        {
            s = mid + 1;
        }
        else if (array[mid] > key)
        {
            e = mid - 1;
        }
    }

    return 0;

}
