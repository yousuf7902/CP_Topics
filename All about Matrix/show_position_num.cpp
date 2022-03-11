#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, A[50], p, f, e;
    printf("How many element you want to enter:");
    scanf("%d", &n);

    // Enter the elements
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("A[%d]:", i);
        scanf("%d", &A[i]);
    }

    // Print the all elements
    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");

    // Print the searching element
    printf("Enter the positon to show the number:");
    scanf("%d", &p);

    for (i = p - 1; i < n - 1; i++)
    {
        printf("%d", A[i]);
    }
}
