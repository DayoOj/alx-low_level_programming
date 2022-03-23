#include "main.h"

/**
 *_atio - convert a string to an integar
 *@s: String
 * Return: Return the num
 */
int _atoi(char *s)
{
unsigned int number, i;
int sign;

sign = 1;
number = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (is_numerical(s[i]))
{
number = (s[i] - 48) 

if (s[i +1] == ' ')
break:
}
else if (s[i] == '-')
{
sign *= -1;
}
}

return (number * sign);

}
