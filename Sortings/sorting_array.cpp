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

    /*-------------------------------------------------------------*/
    // >>>>>>>>>>>>>>>>>>>>>>>>> Bubble Sort <<<<<<<<<<<<<<<<<<<<< //
    //-------------------------------------------------------------//

    /*  Reapetedly swap two adjacent elements if they are in wrong order
        wrong order is Left number > Right number
        sort it {12,45,23,51,19,8}
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

    /*-------------------------------------------------------------*/
    // >>>>>>>>>>>>>>>>>>>>>> Insertion Sort <<<<<<<<<<<<<<<<<<<<< //
    //-------------------------------------------------------------//

    /*  Insert an element from unsorted array to its correct position in sorted array
        sort it {12,45,23,51,19,8}
    */

    int n, current, j;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}