#include "main.h"

/**
 *  print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int y, x;

	y = 0;
	for (; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
			_putchar(a[y][x]);
		_putchar('\n');
	}
}
