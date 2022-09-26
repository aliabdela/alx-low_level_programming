#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to check
* @accept: string to check against
* Return: pointer to byte in s that matches or Null if no match
* main - check the code
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
	break;
	}
if (accept[j])
	return (s + j);
}
return (0);
}
