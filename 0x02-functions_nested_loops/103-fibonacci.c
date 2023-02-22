#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
long int sum = 0, a = 1, b = 2, c;

while (b <= 4000000)
{
if (b % 2 == 0)
sum += b;

c = a + b;
a = b;
b = c;
}

printf("%ld\n", sum);

return (0);
}
