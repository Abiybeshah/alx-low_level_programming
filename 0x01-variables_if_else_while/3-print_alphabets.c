#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char beta;
	char alpha;

	beta = 'a';
	alpha = 'A';
	while (beta <= 'z')
{
	putchar(beta);
	beta++;
}
	while (alpha <= 'Z')
{
	putchar(alpha);
	alpha++;
}
putchar('\n');
	return (0);
}
