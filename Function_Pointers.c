#include <stdio.h>

void DellPogie1(int var) {
	printf("This is DellPogie1 and var is: %d \n", var);
}

void DellPogie2(int var) {
	printf("This is DellPogie2 and var is: %d \n", var);
}

void DellPogie3(int var) {
	printf("This is DellPogie3 and var is: %d \n", var);
}

void DellPogie4(int var) {
	printf("This is DellPogie4 and var is: %d \n", var);
}

void DellPogie5(int var) {
	printf("This is DellPogie5 and var is: %d \n", var);
}

int main() {
	
	void (*pf[])(int) = { DellPogie1, DellPogie2, DellPogie3, DellPogie4, DellPogie5 };
	
	int c = 0;
	
	while (c < 5) {
		pf[c](c);
		++c;
	}
		
	return 0;
	
}