#include <unistd.h>

/**
 * this is my _putchar.c
 */

int -putchar(char c)
{
	return write(STDOUT-FILENO, &c, 1);
}
