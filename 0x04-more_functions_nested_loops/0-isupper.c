#include "main.h"
/**
 * _isupper- a function that checks for uppercase character
 *
 * @c: character
 * Description: print the alphabets with putchar.
 * Return: void
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

