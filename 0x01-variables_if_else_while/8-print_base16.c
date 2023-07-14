#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;
	int n;

	n = 0;

	while (n < 10)
{
		putchar(n + '0');
		n++;
}
	for (alpha = 'a' ; alpha <= 'f' ; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
