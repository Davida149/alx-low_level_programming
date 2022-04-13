#include "dog.h"
#include <stdio.h>
/**
 *init_dog -  a function that initialize a variable of type struct dog
 *@d: pointer to struct
 *@name: pointer to array name
 *@age: dogs age
 *@owner: pointer to dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
