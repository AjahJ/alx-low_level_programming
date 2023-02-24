#include "main.h"
/**
 * print_number - prints a  number
 * @: The number to print
 *
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('_');
num = -num;
}
if (num > 9)
{
print_numbers(num / 10);
}
_putchar(num % 10 + '0');
}
