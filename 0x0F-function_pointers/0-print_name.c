#include <stdlib.h>

/**
 * print_name - callback function given as a parameter
 * @name: parameter needed for the callback
 * @f:function to call
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
