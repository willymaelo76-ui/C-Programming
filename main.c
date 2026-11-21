#include <stdio.h>

int main(void)
{
    int a, b, c;
    int sum;
    int average;

    printf("Enter any three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3;

    printf("sum = %d\n", sum);
    printf("average = %d\n", average);

    return 0;
}