#include <stdio.h>

/*------------------------------------------------------------------*/
// >>>>>>>>>>>>>>>>>>>>>>>> Strong Number <<<<<<<<<<<<<<<<<<<<< //
//------------------------------------------------------------------//

int main()
{
    int num, fact, r, temp, i, sum = 0;
    printf("Enter the number:");
    scanf("%d", &num);

    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        fact = 1;
        for (i = 1; i <= r; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("%d is a strong number", num);
    }
    else
    {
        printf("%d is not a strong number", num);
    }
}
