#include<stdio.h>
#include<math.h>
int main()
{
	int i, sum =0, n;
	printf("Enter the number : ");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + pow(i, 2);
	}
	printf("\nThe summation of square series is %d\n", sum);
	return 0;
}