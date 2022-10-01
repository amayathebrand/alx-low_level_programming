#include "main.h"
#include <stdio.h>
/**
 *  _strpbrk - bytes
 * @s:The null-terminated string to be scanned
 * @accept:he null-terminated string containing the characters to match.
 * Return:Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*accept == *s)
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
