#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, A[3][3];

    // Enter all numbers
    printf("Enter the numbers:\n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("A[%d] [%d]:", r, c);
            scanf("%d", &A[r][c]);
        }
    }

    // print the matrix
    printf("The matrix is: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }

    // Transpose matrix
    printf("The transpose matrix is: \n");
    for (c = 0; c < 3; c++)
    {
        for (r = 0; r < 3; r++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }

    // Identity matrix
    printf("The identity matrix is: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r == c)
            {
                printf("1\t");
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }

    // Digonal matrix
    printf("The Digonal matrix is: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r == c)
            {
                printf("%d\t", A[r][c]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }

    // Upper triangle matrix
    printf("The upper triangle matrix: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r <= c)
            {
                printf("%d\t", A[r][c]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }

    // Lower triangle matrix
    printf("The lower triangle matrix: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r >= c)
            {
                printf("%d\t", A[r][c]);
            }
            else
            {
                printf("0\t");
            }
        }
        printf("\n");
    }
    return 0;
}
