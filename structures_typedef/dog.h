#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type representing a dog.
 * @name: Pointer to the dog's name (string).
 * @age: Float representing the dog's age.
 * @owner: Pointer to the dog's owner (string).
 */
struct dog
{
  char *name;
  float age;
  char *owner
};

#endif /* DOG_H */
