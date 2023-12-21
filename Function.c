#include <stdio.h>

/* declare function */
void print_big(int number);

int main() {
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;
	for (i = 0; i < 10; i++) {
		print_big(array[i]);
	}
	return 0;
}

void print_big(int number) {
	if (number > 3) {
		printf("%d is big \n", number);
	}
}