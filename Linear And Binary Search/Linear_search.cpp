#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);


    /*-------------------------------linear search----------------------------------*/
    //
    //           /*****{12,18,20,42, 8,10} find 8 and print index*****/
    //
    //------------------------------------------------------------------------------//

    int n, key;
    cin >> n;

     int array[n];
    for (int i = 0; i < n;i++){
        cin >> array[i];
    }
    cout << "Input search key: " << endl;
    cin >> key;
    for (int i = 0; i < n;i++){
        if(array[i]==key){
            cout << "Index = " << i << " "
                 << "Number= " << array[i];
                return 0;
        }
    }
    return -1;


    return 0;
}