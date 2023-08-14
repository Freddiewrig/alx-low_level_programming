#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog infor
 * @name: dogs name
 * @age: dogs age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /* DOG_H */
