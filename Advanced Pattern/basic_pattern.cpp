
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows, cols, count = 1;

    cin >> rows;

    /* Rectangle pattern

     *  *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
     *  *  *  *  *

    */

    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }

    /* Hollow Rectangle Pattern

    * * * * *
    *       *
    *       *
    *       *
    * * * * *

    */

    cin >> rows >> cols;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == cols)
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

    /* Inverted Half Pyramid

     *  *  *  *  *
     *  *  *  *
     *  *  *
     *  *
     *

    */

    for (int i = rows; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << " * ";
        }
        cout << endl;
    }

    /* Half pyramid after 180 degree rotation

      *
     *  *
    *  *  *
   *  *  *  *
  *  *  *  *  *

    */

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (j <= rows - i)
            {
                cout << " ";
            }
            else
            {
                cout << " * ";
            }
        }
        cout << endl;
    }

    /* Half pyramid using numbers

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5

    */

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    /* Floyd's Trinangle

    1
    2 3
    4 5 6
    7 8 9 10

    */

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    /* Butterfly Pattern

    *    *
    **  **
    ******
    ******
    **  **
    *    *

    */

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * rows - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = rows; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        int space = 2 * rows - 2 * i;
        for (int j = space; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}