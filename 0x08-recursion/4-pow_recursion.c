#include "main.h"
/**
 *_pow_recursion - Returns the value of x to the power y
 *@x: Base
 *@y: Power
 *Return: -1 if y is lower than 0
 **/
int _pow_recursion(int x, int y)
{
int result;
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
result = _pow_recursion(x, y - 1);
return (result * (x));
}
