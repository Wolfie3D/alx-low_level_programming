_table - Prints the 9 times table, starting with 0
*
* Return: void
*/
void times_table(void)
{
int i, j, result;

for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;

if (j == 0)
_putchar(result + '0');
else if (result <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(result + '0');
}
else
{
_putchar(',');
_putchar(' ');
_putchar(result / 10 + '0');
_putchar(result % 10 + '0');
}
}
_putchar('\n');
}
}
