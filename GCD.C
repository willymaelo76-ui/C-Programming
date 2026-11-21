#include<stdio.h>
#include<math.h>
int gcdnonrecursive(int m,int n)
{
int remainder;
remainder=m-(m/n*n);
if(remainder==0)
return n;
else
gcdnonrecursive(n,remainder);
}
int main()
{
int a,b,igcd;
printf("enter the two numbers whose gcd is to be found:");
scanf("%d%d",&a,&b);
printf("GCD of %d",gcdnonrecursive(a,b));
return 0;
}