#include "dog.h"
#include <string.h>
/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
strcpy(d->name, name);
d->age = age;
strcpy(d->owner, owner);
}
}
