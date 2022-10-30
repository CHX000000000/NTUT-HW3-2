#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hanoi(int n, char A, char B, char C);

int main()
{
	char A='A', B='B', C='C';
	int n;
	scanf("%d", &n);
	hanoi(n,A,B,C);
	printf("Total = %d", (int)pow(2, n)-1);
}

void hanoi(int n, char A, char B, char C)
{
	if (n == 1) {
		printf("Move sheet from %c to %c\n", A, C);
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}