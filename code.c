
#include <stdio.h>

int main()
{
    int n, r, sum = 0;

    do
    {
        printf("ENTER A POSITIVE INTEGER: ");
        scanf("%d", &n);

        if (n < 0)
        {
            printf("INVALID INPUT! TRY AGAIN.\n");
        }

    } while (n < 0);

    while (n != 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }

    printf("THE SUM OF INDIVIDUAL DIGITS IS: %d", sum);

    return 0;
}
