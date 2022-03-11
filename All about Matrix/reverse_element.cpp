#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, A[50], i;

    // Enter the elements
    printf("How many elements you want to enter:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("A[%d]:", i);
        scanf("%d", &num);
        A[i] = num;
    }

    // Print the elements
    printf("The elements are: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }

    // Print the reverse elements
    printf("The reverse elements are: \n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", A[i]);
    }
}
