#include <stdio.h>
/**
 *  main - prints all passed arguments
 *  @argc: unused counter for arguments
 *  @argv: array of pointers to passed strings
 *  Return: zero in sucess
*/
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
