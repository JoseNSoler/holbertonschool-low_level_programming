#include <stdio.h>
#include <stdlib.h>
/**
 * main -List numbers
 * Return: 0
 *
*/
int main(void)
{

int x = 50;

int y = 50;

while (x <= 59)
{
for ( ; y <= 59; y++)
{
putchar(x);
putchar(y);
if (y == 59 && x == 59)
{
putchar('\n');
break;
}
putchar(',');
putchar(' ');
}
y = 50;
x++;
}
return (0);
}
