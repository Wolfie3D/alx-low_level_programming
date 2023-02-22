#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
* Return: Always 0
*/

nclude <stdio.h>

int main(void)
{
int i;
long long int first = 1, second = 2, next;

printf("%lld, %lld, ", first, second);

for (i = 3; i <= 98; i++) {
next = first + second;
printf("%lld", next);

if (i != 98)
printf(", ");

first = second;
second = next;
}

printf("\n");

return 0;
}
