#include<stdio.h>
void main()
{
int f0,f1,f,n,i;
printf("ENTER THE VALUE FOR n:");
scanf("%d",&n);
f0=2;
f1=3;
printf("FIBONACCI SEQUENCE FOR THE FIRST %d TERMS:\n",n);
i=0;
while(i<=n)
{
printf("%d\t",f0);
f=f0+f1;
f0=f1;
f1=f;
i=i+1;
}
}