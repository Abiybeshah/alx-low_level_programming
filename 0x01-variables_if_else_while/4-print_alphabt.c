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


	while (alpha <= 'z')
{
	if ((alpha != 'q' && alpha != 'e') && alpha <= 'z')
		putchar(alpha);
	alpha++;
}
putchar('\n');
	return (0);
}
