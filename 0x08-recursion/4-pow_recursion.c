#include "main.h"
/**
  * _pow_recursion - function name
  * @x: base  1
  * @y: exposant  2
  * Return: value of a exposant
  */


int _pow_recursion(int x, int y)
{

if (y < 0)
        return (-1);

else if (y == 0)
        return (1);
else if (y==1)
	return (x);
else
        return (x * _pow_recursion(x, (y - 1)));

return (0);
}



