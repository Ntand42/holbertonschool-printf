#include "main.h"

/**
 * print_number - Prints an integer to stdout
 * @n: The integer to print
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
		count += print_number(num / 10);

	num = num % 10 + '0';
	write(1, &num, 1);
	count++;

	return (count);
}
