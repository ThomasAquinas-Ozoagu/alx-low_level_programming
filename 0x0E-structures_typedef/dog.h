#ifndef _DOG_
#define _DOG_

/* struct dog - a living pet with physical attributes */

struct dog
{
	char *name;
	float age;
	char *owner;

}

#ifndef _INIT_DOG_
#define _INIT_DOG_
	void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* define _INIT_DOG_ */

#endif /* define _DOG */
