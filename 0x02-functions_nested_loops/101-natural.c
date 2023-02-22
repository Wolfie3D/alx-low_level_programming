#include <stdio.h>

/**
* main - Computes and prints the sum of all multiples of 3 or 5 below 1024
*
* Return: Always 0.
*/
int main(void)
{
int sum = 0;
int i;

for (i = 1; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0) /* Check if i is a multiple of 3 or 5 */
sum += i; /* Add i to the sum */
}

printf("%d\n", sum); /* Print the sum */

return 0;
}
