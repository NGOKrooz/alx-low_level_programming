#include "main.h"
/**
 * print_alphabet_x10 --> prints the lower case 10 times
 */
void print_alphabet_x10(void);
{
int j;
int a;

for (a = 0; a < 10; a++)
{
for (j = 'a'; j <= 'z'; j++)
{
_putchar(j);
}
_putchar('\n');
}
}
