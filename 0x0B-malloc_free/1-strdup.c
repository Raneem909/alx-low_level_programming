#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the given string
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * fail : NULL
 */
char *_strdup(char *str)
{
char *new_str;
if (str == NULL)
return (NULL);
new_str = (char *) malloc((strlen(str) + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);
strcpy(new_str, str);
return (new_str);
}
