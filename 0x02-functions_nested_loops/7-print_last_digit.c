#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @m: m is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digit(int m)
{
	int lt = m % 10;

	if (m < 0)
	{
		lt = lt * -1;
	}
	_putchar(lt + '0');
	return (lt);
