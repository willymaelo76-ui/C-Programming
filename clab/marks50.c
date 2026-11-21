
#include <stdio.h>

int main()
{
    int marks, i;

    for(i = 1; i <= 50; i++)
    {
        printf("\nEnter marks for student %d: ", i);
        scanf("%d", &marks);

        if(marks < 0 || marks > 100)
        {
            printf("Invalid marks! Enter marks between 0 and 100.\n");
            i--;
            continue;
        }

        if(marks >= 90)
            printf("Grade: A\n");
        else if(marks >= 75)
            printf("Grade: B\n");
        else if(marks >= 60)
            printf("Grade: C\n");
        else if(marks >= 50)
            printf("Grade: D\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}
