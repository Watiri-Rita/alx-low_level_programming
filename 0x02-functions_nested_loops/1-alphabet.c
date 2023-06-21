#include "main.h"

/**
* print_alphabet - prints lowercase alphabet
* Return: Always 0
*/
void print_alphabet(void)
{
int i;

for (i = 97 ; i < 123 ; i++)
{
_putchar(i);
if (i == 122)
{
_putchar('\n');
}
}
}
