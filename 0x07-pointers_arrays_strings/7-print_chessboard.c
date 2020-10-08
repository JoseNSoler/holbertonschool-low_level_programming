#include "holberton.h"


/**
 * print_chessboard - prints a chessboard in stdout
 * @a: pointer - array of pieces
 *
 *
 * Return: void function - print format cheestable
 */



void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 7; y++)
		{
			putchar(a[x][y]);
		}
		putchar('\n');
	}
}
