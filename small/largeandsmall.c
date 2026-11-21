#include<stdio.h>
int main(void){
    int a[10], i, n, small, large;

    printf("Enter The Array Size:");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("\nArray size must be between 1 and 10.\n");
        return 1;
    }

    printf("ENTER ELEMENTS OF ARRAY:");
    for (i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("\nInvalid array element.\n");
            return 1;
        }
    }

    small = a[0];
    large = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < small)
            small = a[i];
        if (a[i] > large)
            large = a[i];
    }

    printf("largest value is:%d\n", large);
    printf("smallest value is:%d\n", small);
    return 0;
}