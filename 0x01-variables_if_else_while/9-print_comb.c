#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
 */
int main(void)
{
	char comma;

	comma = ',';

	int n;

	n = 0;
	while (n < 10)
{
		putchar(n + '0');
		n++;

		putchar(comma);
		putchar(' ');
}
	putchar('\n');
	return (0);
}
