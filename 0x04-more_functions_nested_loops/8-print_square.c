#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line.
 * @size: size of square
 * Description: can only use _putchar to print 
 */

void print_square(int size)
{
	int x, y;

	y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}

