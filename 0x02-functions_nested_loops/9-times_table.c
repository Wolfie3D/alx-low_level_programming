#include <stdio.h>
#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: no return value
*/
void times_table(void)
{
int i, j, result;

for (i = 0; i < 10; i++)
{
_putchar('0');
for (j = 1; j < 10; j++)
{
_putchar(',');
_putchar(' ');
result = i * j;
if (result < 10)
{
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
}
_putchar('\n');
}
}
