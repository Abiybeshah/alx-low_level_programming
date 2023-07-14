#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char comma;

	comma = ',';

	for (n = 0 ; n < 10 ; n++)
{
		putchar(n + '0');
		if (n < 9)
{

		putchar(comma);
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
