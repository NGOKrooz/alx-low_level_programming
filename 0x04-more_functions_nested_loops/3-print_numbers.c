#include "main.h"
/**
 *print_numbers -Write a function that prints the number
 *Description: Write a function that prints the numbers.
 *Return: void
 */
void print_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
