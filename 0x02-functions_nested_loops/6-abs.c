#include "main.h"
/**
 * _abs - Computes the bslute valeu
 *@c: the number will be computed
 *Return: Abslute of valeu
 *
 */
int _abs(int c)
{
if (c < 0)
{
int abs_val;
abs_val = c * -1;
return (abs_val);
}
return (0);
}
