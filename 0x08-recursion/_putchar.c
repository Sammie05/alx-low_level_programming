#include <unistd.h>

/**
 * this is my _putchar.c
 */

int _putchar(char c)
{
	return write(STDOUT-FILENO, &c, 1);
}