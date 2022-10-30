#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int power(int, int);

int main()
{
	int base, ex;
	printf("Please enter base and exponent :");
	scanf("%d %d", &base, &ex);
	printf("%d\n", power(base, ex));
	system("pause");
	return 0;
}

int power(int base, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return base;
	else
		return base*power(base, n-1);
}