#include <stdio.h>

int fact(int)
{
	int i, f = 1,n;
	for (i = 1; i <= n; i++)
		f *= i;
	return f;
}

int main(void)
{
	int n;

	printf("ENTER A VALUE FOR n:");
	if (scanf("%d", &n) != 1)
		return 1;

	printf("THE FACTORIAL OF A GIVEN NO IS..%d", fact(n));
	return 0;
}