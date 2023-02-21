#include <stdio.h>
/**
 * this program prints alphabets from a to Z
 *
 * in a lower case 
 */

char main (void) 
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');

	return 0;
}
