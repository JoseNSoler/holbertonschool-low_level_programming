#include <unistd.h>
#include <stdio.h>


/**
 * main - main entry
 * @c: char
 * Return: void
 */


int _putchar(char c);
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}




/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * fizz_buzz - prints the "Fizz Buzz test" with mods
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0)
		{
			printf("Buzz");
		}
		if ((x % 3 != 0) && (x % 5 != 0))
		{
			printf("%d", x);
		}
		putchar(32);
	}
	_putchar('\n');
}
