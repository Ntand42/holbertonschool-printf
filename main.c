#include "main.h"

/**
 * main - Test function for _printf
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("Hello %s!\n", "Holberton");
	_printf("Length: %d\n", len);
	_printf("Character: %c\n", 'H');
	_printf("Percent: %%\n");
	_printf("Negative: %d\n", -123);
	_printf("Integer: %i\n", 456);
	return (0);
}

