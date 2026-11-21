#include <stdio.h>

int main(void)
{
    int a, b, c, d, l;

    printf("Enter 4 integers: ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        printf("Invalid input\n");
        return 1;
    }

    l = a;
    if (b > l) l = b;
    if (c > l) l = c;
    if (d > l) l = d;

    printf("largest integer = %d\n", l);
    return 0;
}