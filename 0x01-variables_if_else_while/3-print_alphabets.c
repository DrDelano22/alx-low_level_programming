#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int chA;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (chA = 'A'; chA <= 'Z'; chA++)
putchar(chA);
putchar('\n');
return (0);
}
