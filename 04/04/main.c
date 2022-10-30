#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

unsigned long long int fibonacci(unsigned int);

int main(void) {
	int number=1;
	unsigned long long int before=1;
	while (fibonacci(number) >= before)
	{
		printf("Fibonni result of %3d th is : %lld \n", number, fibonacci(number));
		before = fibonacci(number++);
	} 
	system("pause");
	return 0;
}

unsigned long long int fibonacci(unsigned int a)
{
	int i;
	unsigned long long int result = 0, b = 0, c = 1;
	for (i = 1; i <= a; i++) {
		result = b + c;
		b = c;
		c = result;
	}
	return result;
}