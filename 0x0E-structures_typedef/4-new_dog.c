#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (name == NULL || owner == NULL)
return (NULL);

dog = (dog_t *) malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

(*(dog)).name = (char *) malloc(strlen(name) + 1);
if ((*(dog)).name == NULL)
return (NULL);
strcpy((*(dog)).name, name);

(*(dog)).age = age;

(*(dog)).owner = (char *) malloc(strlen(owner) + 1);
if ((*(dog)).owner == NULL)
return (NULL);
strcpy((*(dog)).owner, owner);

return (dog);
}
