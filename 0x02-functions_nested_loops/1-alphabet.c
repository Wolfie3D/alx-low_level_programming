#include "main.h"

/**
* print_alphabet - Prints the alphabet in lowercase.
*
* Description:
*   This function prints the lowercase alphabet to the console, followed
*   by a newline character '\n'. It uses two _putchar statements to print
*   the letters of the alphabet one by one.
*
* Return: void.
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
