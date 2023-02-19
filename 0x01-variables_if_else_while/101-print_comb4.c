#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all possible combinations of three digit numbers.
 * Numbers must be separated by commas and a space.
 * Numbers should be printed in ascending order with 3 digits.
 * You can only use 'putchar' max six times.
 * You are not allowed to use any variable of type 'char'.
 * Return: Always 0 (Success)
 */
int main(void)
{
int h, t, u = 0;
for (h = 0; h < 8; h++)
{
for (t = h + 1; t < 9; t++)
{
for (u = t + 1; u < 10; u++)
{
if (h != t && h != u && t != u)
{
putchar(h + '0');
putchar(t + '0');
putchar(u + '0');
if (h + t + u < 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
