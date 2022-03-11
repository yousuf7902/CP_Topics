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

    /*-------------------------------Binary Search----------------------------------*/
    //
    //           /*****{8,10,12,21,27,34,42} find 27 and print index*****/
    //
    //------------------------------------------------------------------------------//

    int array[n];
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