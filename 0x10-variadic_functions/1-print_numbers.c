#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print all the parametes.
 * @separator: string to be printed between numbers
 * @n: elements to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list Vali;
unsigned int i;

va_start(Vali, n);

for (i = 0; i < n; i++)
{


printf("%d", va_arg(Vali, int));

if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(Vali);

}
