/*---------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>> Sieve of Eratosthenes <<<<<<<<<<<<<<<<<<< //
//---------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;

const int space = 1e7; // 1e7=10000000

int arr[space] = {0};

void seive()
{
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 4; i <= space; i += 2)
    {
        arr[i] = 1;
    }

    for (int i = 3; i <= space; i += 2)
    {
        if (arr[i] == 0)
        {
            for (int j = i + i; j <= space; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{

    seive();

    vector<int> vec;
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] == 0)
        {
            vec.emplace_back(i);
        }
    }
    for (auto it : vec)
    {
        cout << it << " ";
    }
}

/*---------------------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>> Sieve of Eratosthenes In a optimal way <<<<<<<<<<<<<<<<<<< //
//---------------------------------------------------------------------------------//

#include <bits/stdc++.h>
using namespace std;

const int space = 1e7; // 1e7=10000000

int arr[space] = {0};

void seive()
{
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 4; i*i <= space; i += 2)
    {
        arr[i] = 1;
    }

    for (int i = 3; i*i <= space; i += 2)
    {
        if (arr[i] == 0)
        {
            for (int j = i *i; j <= space; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int main()
{

    seive();

    vector<int> vec;
    for (int i = 0; i < 30; i++)
    {
        if (arr[i] == 0)
        {
            vec.emplace_back(i);
        }
    }
    for (auto it : vec)
    {
        cout << it << " ";
    }
}