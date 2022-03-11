#include <bits/stdc++.h>
using namespace std;

/*------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>>>> Aramstrong Number <<<<<<<<<<<<<<<<<<<<< //
//------------------------------------------------------------------//

int main()
{
    int num, sum = 0;
    cin >> num;
    int original = num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        sum += pow(lastdigit, 3);
        num = num / 10;
    }

    if (sum == original)
    {
        cout << "Aramstrong number" << endl;
    }
    else
    {
        cout << "Not aramstrong number" << endl;
    }
}