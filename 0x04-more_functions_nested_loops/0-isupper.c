#include <stdio.h>
#include "main.h"
/**
* _isupper - checks for uppercase character
*@c: int
*Return: 1 if upper, 0 other
*/

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
