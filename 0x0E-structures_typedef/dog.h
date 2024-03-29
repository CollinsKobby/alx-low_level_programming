#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog's info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: about the name and age of the dog as well the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
