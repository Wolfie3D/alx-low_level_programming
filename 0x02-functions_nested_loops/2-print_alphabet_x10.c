#include <stdio.h>

/**
* print_alphabet_x10 - Prints the alphabet in lowercase ten times
*
* this program works well
*/

int main (void)
{
int i;
char j;

for (i = 0; i < 10; i++) 
{
for (j = 'a'; j <= 'z'; j++)
putchar(j);
putchar('\n');
}
}
