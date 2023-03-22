#include "main.h"
#include <stdio.h>
/**
 *_islower - Check the letters
 *@c: the character will be checked
 * Return: 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
char c;
printf("Enter a character: ");
scanf("%c", &c);
if (is_lowercase(char c))
{
printf("The character is lowercase\n");
}
else
{
printf("The character is not lowercase\n");
}
return (0);
}
