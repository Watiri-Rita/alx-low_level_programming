#include "main.h"

/**
* _isalpha - checks if the character is a letter
* @c: the character being checked
*
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
int i;

for (i = 65 ; i < 123 ; i++)
{
if (i >= 91)
{
if (i < 97)
{
continue;
}
}
if (i == c)
{
return (1);
}
}
return (0);
}
