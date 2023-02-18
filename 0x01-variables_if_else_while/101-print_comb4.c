nclude <stdio.h>

int main(void)
{
    int num1, num2;
    char output[600] = ""; // allocate a character array to hold the output string

    for (num1 = 0; num1 <= 98; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
            // build the output string by appending each digit and separator
            output[strlen(output)] = (num1 / 10) + '0';
            output[strlen(output)] = (num1 % 10) + '0';
            output[strlen(output)] = ' ';
            output[strlen(output)] = (num2 / 10) + '0';
            output[strlen(output)] = (num2 % 10) + '0';

            if (num1 == 98 && num2 == 99) {
                // do not add a comma after the last pair of numbers
            } else {
                output[strlen(output)] = ',';
                output[strlen(output)] = ' ';
            }
        }
    }

    printf("%s\n", output); // print the whole output string using a single printf call

    return 0;
}
