#ifndef _DOG_
#define _DOG_

/**
 * struct dog - a living pet with physical attributes
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * this struct will be use across multiple exercises
 */


struct dog
{
	char *name;
	float age;
	char *owner;

};

#ifndef _INIT_DOG_
#define _INIT_DOG_
	void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* define _INIT_DOG_ */

#ifndef _PRINT_DOG_
#define _PRINT_DOG_
void print_dog(struct dog *d);
#endif /* void print_dog(struct dog *d) */


#ifndef _DOG_T_
#define _DOG_T_
typedef struct dog dog_t;
#endif /* define _DOG_T_ */

#ifndef _NEW_DOG_
#define _NEW_DOG_
dog_t *new_dog(char *name, float age, char *owner);
#endif /* _NEW_DOG_ */

#ifndef _FREE_DOG_
#define _FREE_DOG_
void free_dog(dog_t *d);
#endif /* define _FREE_DOG_ */






#endif /* define _DOG */
