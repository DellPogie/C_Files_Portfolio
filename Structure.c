#include <stdio.h>

/* structure */

typedef struct {
	char * name;
	int age;
} person;

int main() {
	person pogie;
	
	pogie.name = "Dell";
	pogie.age = 30;
	printf("%s is %d years old.", pogie.name, pogie.age);
}