#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha;

	alpha = 'a';

	for (; alpha != 'q', 'e' ; alpha++)
{
		putchar(alpha);
}
putchar('\n');
	return (0);
}
