#include<stdio.h>
int main()
{
    int n,r,sum=0;
    
    printf("ENTER A POSITIVE INTEGER:");
    scanf("%d",&n);
    if(n<0)
    {
        printf("INVALID INPUT. PLEASE ENTER A POSITIVE INTEGER:");
        scanf("%d",&n);
    }
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("THE SUMOF INDIVIDUAL DIGITS OF A POSITIVE INTEGER IS..%d",sum);
    return 0;
}