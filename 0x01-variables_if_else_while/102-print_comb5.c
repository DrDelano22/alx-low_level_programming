#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all combinations of single digit numbers.
 * Numbers must be seaerated by commas and a space.
 * You can only use 'putchar' to printto the console.
 * You can only use 'putchar' up to four times.
 * You are not allowed to use any variable of type 'char'.
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
for (ch = 0; ch < 10; ch++)
{
putchar(ch + '0');
if (ch < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
