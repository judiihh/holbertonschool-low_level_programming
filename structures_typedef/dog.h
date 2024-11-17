#include <stdio.h>
#include "dog.h"

/**
 * main - entry point to test struct dog
 *
 * Return: always 0 (succes)
 */
int main (void)
{
  struct dog my_dog;

  my_dog.name = "Buddy";
  my_dog.age = 3.5;
  my_dog.owner = "Alice";

  printf("Dog's Name: %s\n", my_dog.name);
  printf("Dog's Age: %.1f\n", my_dog.age);
  printf("Dog's Owner: %s\n", my_dog.owner);

  return (0);
}
