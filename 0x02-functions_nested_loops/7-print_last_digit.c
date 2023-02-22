#include "main.h"
#include <limits.h>

/**
* print_last_digit - Prints the last digit of a number
* @n: The number to be checked
*
* Return: The value of the last digit
*/
int print_last_digit(int n)
{
int last_digit;

if (n == INT_MIN)
{
last_digit = 8;
_putchar(last_digit + '0');
return (last_digit);
}
else
{
last_digit = n < 0 ? -n % 10 : n % 10;
_putchar(last_digit + '0');
return (last_digit);
}
}
