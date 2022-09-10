#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints allsingle digit numbers of
 * base 10 from 0
 * Return: Always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		printf("%d", y);
	}
	putchar('\n');
	return (0);
}
