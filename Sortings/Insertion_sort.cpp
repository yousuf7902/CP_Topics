/*-------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>> Insertion Sort <<<<<<<<<<<<<<<<<<<<< //
//-------------------------------------------------------------//

/*  Insert an element from unsorted array to its correct position in sorted array
    sort it {12,45,23,51,19,8}
    Time Complexity : O(N^2)
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
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