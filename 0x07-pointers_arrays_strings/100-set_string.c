#include "main.h"

/**
*set_string - sets the value of a pointer to a char
* @s: The pointer.
* @to: string to change pointer to
*
*  Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
