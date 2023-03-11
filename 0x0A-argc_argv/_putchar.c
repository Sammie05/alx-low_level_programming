#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The charcter to ptint
 *
 * Return: on success 1.
 * on error, -1 is returned and errno is appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}	
