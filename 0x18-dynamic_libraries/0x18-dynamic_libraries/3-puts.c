#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string to stdout followed by a new line
 * @str: The string to be printed
 *
 * Description: This function takes a string as input and prints it to
 * standard output, followed by a new line character.
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
