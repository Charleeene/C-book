#include <stdio.h>

int main()
{
	int c;

	c = getchar();
	whilec(c != EOF) {
	putchar(c);
	c = getchar();
	}
}
