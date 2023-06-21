#include "main.h"

/**
* _islower - checks if the character is lowercase
*@c: the character being checked
*
* Return: 1 if c is lowercase and 0 if otherwise
*/
int _islower(int c)
{
int i;

for (i = 97 ; i < 123 ; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
