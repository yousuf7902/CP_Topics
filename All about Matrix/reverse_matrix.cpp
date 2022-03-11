#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, A[3][3];

    //Enter the matrix elements
    printf("Enter the matrix numbers: \n");

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("A[%d][%d]:", r, c);
            scanf("%d", &A[r][c]);
        }
    }

    //Print the matrix elements
    printf("The matrix is : \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%d\t", A[r][c]);
        }
        printf("\n");
    }

    //Print the reverse upper triangle matrix
    printf("The reverse upper triangle matrix is: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r + c < 3)
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

    //Prints the reverse lower triangle matrix
    printf("The reverse lower triangle matrix is: \n");
    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            if (r + c >= 2)
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
}
