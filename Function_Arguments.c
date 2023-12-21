#include <stdio.h>

/* function arguments */

typedef struct {
	char * name;
	int age;
} person;

void birthday(person * p);

void birthday(person * p) {
	p -> age++;
}

int main() {
	person pogie;
	
	pogie.name = "Dell";
	pogie.age = 30;
	
	printf("%s is %d years old. \n", pogie.name, pogie.age);
	birthday(&pogie);
	printf("Happy birthday! %s is now %d years old. \n", pogie.name, pogie.age);
	return 0;
}