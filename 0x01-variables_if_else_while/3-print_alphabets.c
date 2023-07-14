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
	while (alpha <= 'Z')
{
	putchar(alpha);
	alpha++;
}
	while (beta <= 'z')
{
	putchar(beta);
	beta++;
}
putchar('\n');
	return (0);
}
