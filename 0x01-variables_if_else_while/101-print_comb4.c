#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
    int num1, num2;
    int comma = 44;  // ASCII code for comma character
    int space = 32;  // ASCII code for space character

    for (num1 = 0; num1 <= 98; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
            putchar((num1 / 10) + '0');
            putchar((num1 % 10) + '0');
            putchar(space);
            putchar((num2 / 10) + '0');
            putchar((num2 % 10) + '0');
            putchar(comma);
            putchar(space);
        }
    }

    putchar('\n');

    return (0);
}
