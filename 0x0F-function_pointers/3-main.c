#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - function
 *@argc: number of arguments
 *@argv: array with arguments
 *
 * Return: no return
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int result;

	n1 = 0;
	n2 = 0;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	    && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] == '\0')
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);
		result = (*get_op_func(argv[2]))(n1, n2);
		printf("%d\n", result);

	} else
	{

		printf("Error\n");
		exit(99);
	}
	return (0);
}
