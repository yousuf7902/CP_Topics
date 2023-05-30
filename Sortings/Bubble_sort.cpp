#include <bits/stdc++.h>
using namespace std;

int main()
{

    /*-------------------------------------------------------------*/
    // >>>>>>>>>>>>>>>>>>>>>>>>> Bubble Sort <<<<<<<<<<<<<<<<<<<<< //
    //-------------------------------------------------------------//

    /*  Reapetedly swap two adjacent elements if they are in wrong order
        wrong order is Left number > Right number
        sort it {12,45,23,51,19,8}
        
        Time Complexity : O(N^2)
    */

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

   
    return 0;
}