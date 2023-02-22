#include "main.h"

/**
 * print_alphabet_x10 -> to print alphabets 10X
 * Return Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int c;
int d;
for (c = 1; c <= 10; c++)
{
for (d = 'a'; d <= 'z'; d++)
{
_putchar(d);
}
_putchar('\n');
}
}
