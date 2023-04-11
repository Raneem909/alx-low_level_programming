#include "main.h"
#include "string.h"
/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains s1, followed by s2,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
size_t len1, len2;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
new_str = (char *) malloc((len1 + len2 + 1));
if (new_str == NULL)
return (NULL);
strcpy(new_str, s1);
strcat(new_str, s2);
return (new_str);
}
