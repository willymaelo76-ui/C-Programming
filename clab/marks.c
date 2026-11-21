#include<stdio.h>
void main()
{
int marks;
printf("Enter marks: ");
scanf("%d",&marks);

if (marks<0 || marks>100)
{
printf("Invalid marks entered. Please enter marks between 0 and 100."); 
return;
}

if(marks>=90)
printf("Grade: A");
else if(marks>=75)
printf("Grade: B");
else if(marks>=60)
printf("Grade: C");
else if(marks>=50)
printf("Grade: D");
else
printf("Grade: F");
}   