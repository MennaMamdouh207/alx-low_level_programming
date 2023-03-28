#include "main.h"
#include <stddef.h>
/**
 * _strlen - Return length of string
 * @str: The length git be
 * Return: the length of @str
 * @str: The string
 */
size_t int _strlen(const char *str)
{
size_t length = 0;
while (*str++)
length++;
return (length);
}
