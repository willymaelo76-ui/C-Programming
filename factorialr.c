#include<stdio.h>
int fact(int);
void main()
{
int n,res;
printf("ENETR A NUMBER:");
scanf("%d",&n);
res=fact(n);
printf("THE FACTORIAL OF A GIVEN NUMBER IS..%d",res);
}
int fact(int n)
{
int r;
if(n==0)
return(1);
else
{
r=n*fact(n-1);
return(r);
}
}