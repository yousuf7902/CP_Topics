#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    /* inverted pattern

    12345
    1234
    123
    12
    1

    */

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num + 1 - i; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    /* 0,1 pattern

    1
    01
    101
    0101
    10101

    */

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    /* rohombus pattern

       *****
      *****
     *****
    *****

    */

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /* Number pattern

      1
     1 2
    1 2 3
   1 2 3 4

    */

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    /* Palindromic Pattern

            1
          2 1 2
        3 2 1 2 3
      4 3 2 1 2 3 4

    */

    for (int i = 1; i <= num; i++)
    {
        int j;
        for (j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= num; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (; j <= num + i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }

    /* Star pattern

         *
        ***
       *****
       *****
        ***
         *

    */

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = num; i > 0; i--)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /* zig zag pattern

        *       *
      *   *   *   *
    *       *       *

    */

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}