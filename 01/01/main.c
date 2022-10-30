#include <stdio.h>
#include <stdlib.h>

char changed(char);

int main()
{
	char alphabet;
	printf("Please entrt an alphabet : ");
	alphabet = getche();
	printf("\n%c\n",changed(alphabet));
	system("pause");
	return 0;
}

char changed(char n)
{
	if (n >= 65 && n <= 90)
		n += 32;
	else if (n >= 97 && n <= 122)
		n -= 32;
	return n;
}