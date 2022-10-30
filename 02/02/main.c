#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int lcm(int, int);

int main()
{
	int n1, n2;
	printf("Please enter two integers :");
	scanf("%d %d", &n1, &n2);
	printf("LCM : %d\n", lcm(n1, n2));
	system("pause");
	return 0;
}

int lcm(int a, int b)
{
	int i;
	if (a > b)
		i = a;
	else
		i = b;
	while (1)
	{
		if (i%a == 0 && i%b == 0)
			return i;
		i++;
	}
}