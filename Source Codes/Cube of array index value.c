// To find the cube of array index value and print in one line with spacing.

#include <stdio.h>

void main()
{
	int sum = 0, n, i, max;
	printf("Enter the number of array elements: ");
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)
	{
		a[i] = (i * i * i);
	}
	for (i = 0; i < n; i++)
	{
		printf("%d\t", a[i]);
	}
}
