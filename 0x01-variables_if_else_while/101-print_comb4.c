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
int h = '0', t = '1', u = '2';
{
while ((h <= '7') || (t <= '8') || (u <= '9'))
putchar(h);
putchar(t);
putchar(u);
}
if (u != '9')
{
++u;
}
else
{
if (t != '8')
{
++t;
u = t + 1;
}
else
{
++h;
t = h + 1;
u = t + 1;
}
{
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
}
