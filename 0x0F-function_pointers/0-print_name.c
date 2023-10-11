#include "function_pointers.h"

/**
  * print_name - function that prints a name
  * @name: name of person
  * @f: pointer to a function
  *
  *Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
