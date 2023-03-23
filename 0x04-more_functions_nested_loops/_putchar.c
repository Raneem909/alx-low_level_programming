#include <unistd.h>
#include "main.h"
/**
 * _puchar - write char c to stdout
 * @c: char to be print
 * Return: on success 1 , error -1
*/
int _puchar(int c)
{
return (write(1, &c, 1));
}
