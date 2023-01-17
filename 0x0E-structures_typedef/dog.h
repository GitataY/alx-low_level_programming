#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for the struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 *
 * Description: struct called "dog" that stores its name
 * ,its age and its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

char *_strcpy(char *dest, char *src);

int _strlen(char *s);



#endif
