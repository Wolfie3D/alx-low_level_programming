#include <main.h>

/**
 * 
 *
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        putchar(letter);
    }
    putchar('\n');
}
