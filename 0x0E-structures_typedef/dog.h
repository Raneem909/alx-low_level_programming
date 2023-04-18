#ifndef DOH_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: dog info
*/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
