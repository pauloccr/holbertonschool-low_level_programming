#ifndef DOGGY
#define DOGGY

/**
 * struct dog - it structs description of our friend
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */

typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
