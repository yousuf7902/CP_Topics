#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, A[50], f = 0, p, e;

    printf("How many element?\n");
    scanf("%d", &n);

    // Enter the elements
    printf("Enter the element:\n");

    for (i = 0; i < n; i++)
    {
        printf("A[%d]:", i);
        scanf("%d", &A[i]);
    }

    // Prints the elements
    printf("The elements are: \n");

    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    // Enter elements you want to remove
    printf("Enter the element which you want to remove:");
    scanf("%d", &e);
    for (i = 0; i < n; i++)
    {
        if (A[i] == e)
        {
            f = 1;
            p = i;
            break;
        }
    }
    if (f == 1)
    {
        for (i = p; i < n - 1; i++)
        {
            A[i] = A[i + 1];
        }
    }
    else
    {
        printf("%d not available here", e);
    }

    // print the new array
    printf("The new array will be:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\t", A[i]);
    }
}
