#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
* Return: Always 0
*/
int main(void)
{
int count, flag;
unsigned long int i, j, k;
unsigned long int i1, j1, k1;

i = 1;
j = 2;

printf("%lu, %lu, ", i, j);

for (count = 2; count < 98; count++)
{
if (flag)
{
printf("%lu%019lu", i1, j1);
flag = 0;
}
else
{
if ((j + k) > 99999999999999999)
{
flag = 1;
k1 = (j + k) / 100000000000000000;
k = (j + k) % 100000000000000000;
j1 = (i + j + k1) % 100000000000000000;
i1 = (i + j + k1) / 100000000000000000;
}
else
{
k = j + k;
j1 = i + j + k;
i1 = 0;
}
printf("%lu%019lu", i1, j1);
}
if (count != 97)
printf(", ");
i = j;
j = k;
}
printf("\n");

return (0);
}
