#include <stdio.h>
/**
 * main - print a fuction
 *
 * Description: using the main function
 * this program prints "C program that prints the size of various types on the computer"
 * Return: 0
 */
int main(void)
{
char c;
int i;
long li;
long long lli;
float f;

printf("size of char: %ld bytes\n", sizeof(c));
printf("size of int: %ld bytes\n", sizeof(i));
printf("size of long int: %ld bytes\n", sizeof(li));
printf("size of long long int: %ld bytes\n", sizeof(lli));
printf("size of float: %ld bytes\n", sizeof(f));
return (0);
