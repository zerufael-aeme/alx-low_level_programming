#ifndef DOG_H
#define DOG_H
/**
 *struct dog - creating a dog struct
 *@name: Name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif /* DOG_H */
