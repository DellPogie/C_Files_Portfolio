#include <stdio.h>
#include <string.h>

int main() {
	char * first_name = "Dell";
	char last_name[] = "Logie";
	char name[100];
	
	last_name[0] = 'P';
	sprintf(name, "%s", first_name, last_name);
	if (strncmp(name, "Dell Pogie", 100) == 0) {
		printf("Done! \n");
	}
	name[0] = '\0';
	strncat(name, first_name, 4);
	strncat(name, last_name, 20);
	printf("%s \n", name);
	return 0;
}