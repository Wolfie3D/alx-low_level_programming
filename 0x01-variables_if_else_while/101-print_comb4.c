#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 * ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	char output[600] = "";

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{

			output[strlen(output)] = (num1 / 10) + '0';
			output[strlen(output)] = (num1 % 10) + '0';
			output[strlen(output)] = ' ';
			output[strlen(output)] = (num2 / 10) + '0';
			output[strlen(output)] = (num2 % 10) + '0';

			if (num1 == 98 && num2 == 99) {

			} else {
				output[strlen(output)] = ',';
				output[strlen(output)] = ' ';
			}
		}
	}

	printf("%s\n", output);

	return 0;
}
