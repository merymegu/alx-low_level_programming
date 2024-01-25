#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -print strings
 *@separator: separator
 *@n:number of arguments
 * Return: the sum of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list  Vali;
unsigned int i;
char *str;

va_start(Vali, n);

for (i = 0; i < n; i++)
{
str = va_arg(Vali, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (i != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(Vali);
}
