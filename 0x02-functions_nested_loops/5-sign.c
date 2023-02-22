#include "main.h"

/**
* print_sign - prints the sign of a number
*
* @num: number to check sign of
*
* Return: 1 and prints + if num is greater than zero,
*         0 and prints 0 if num is zero,
*         -1 and prints - if num is less than zero
*/
int print_sign(int num)
{
int result;

if (num > 0)
{
_putchar('+');
result = 1;
}
else if (num == 0)
{
_putchar('0');
result = 0;
}
else
{
_putchar('-');
result = -1;
}

return (result);
}	 
