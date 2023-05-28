#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*---------------------------------------------------------------*/
    // >>>>>>>>>>>>>>>>>>>>>>>> Selection Sort <<<<<<<<<<<<<<<<<<<<< //
    //---------------------------------------------------------------//

    /*  find the minimum element in unsorted array and swap with element at begining
        sort it {12,45,23,51,19,8}
    */

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    
    return 0;
}