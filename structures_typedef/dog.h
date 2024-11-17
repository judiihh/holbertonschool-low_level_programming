#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type representing a dog
 * @name: pointer to the dog's name
 * @age: float representing the dog's age
 * @owner: pointer to the dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
